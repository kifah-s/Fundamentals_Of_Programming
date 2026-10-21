using DVLD_Business;
using System.ComponentModel;

namespace DVLD.People.Controls
{
    public partial class ctrlPersonCardWithFilter : UserControl
    {
        // Define a custom event handler delegate with parameters.
        public event Action<int> onPersonSelected;

        // Create a protected method to raise the event with a parameter.
        protected virtual void PersonSelected(int personID)
        {
            Action<int> handler = onPersonSelected;
            if (handler != null)
            {
                handler(personID);
            }

        }

        private bool _showAddPerson = true;
        public bool ShowAddPerson
        {
            get
            {
                return _showAddPerson;
            }
            set
            {
                _showAddPerson = value;
                btnAddNewPerson.Visible = _showAddPerson;
            }
        }

        private bool _filterEnabled = true;
        public bool FilterEnabled
        {
            get
            {
                return _filterEnabled;
            }
            set
            {
                _filterEnabled = value;
                gbFilter.Enabled = _filterEnabled;
            }
        }

        public ctrlPersonCardWithFilter()
        {
            InitializeComponent();
        }

        private int _personID;

        public int PersonID
        {
            get
            {
                return ctrlPersonCard1.personID;
            }
        }

        public clsPerson SelectedPersonInfo
        {
            get
            {
                return ctrlPersonCard1.SelectedPersonInfo;
            }
        }

        private void FindNow()
        {
            switch (cbFilterBy.Text)
            {
                case "Person ID":
                    {
                        ctrlPersonCard1.LoadPersonInfo(int.Parse(txtFilterValue.Text));
                        break;
                    }

                case "National NO":
                    {
                        ctrlPersonCard1.LoadPersonInfo(txtFilterValue.Text);
                        break;
                    }

                default:
                    {
                        break;
                    }
            }

            if (onPersonSelected != null && FilterEnabled)
            {
                // // Raise the event with a parameter.
                onPersonSelected(ctrlPersonCard1.personID);
            }
        }

        public void LoadPersonInfo(int personID)
        {
            cbFilterBy.SelectedIndex = 1;
            txtFilterValue.Text = personID.ToString();
            FindNow();
        }

        private void cbFilterBy_SelectedIndexChanged(object sender, EventArgs e)
        {
            txtFilterValue.Text = "";
            txtFilterValue.Focus();
        }

        private void btnFindPerson_Click(object sender, EventArgs e)
        {
            if (!this.ValidateChildren())
            {
                // Here we don't continue because the form is not valid.
                MessageBox.Show("Some fields are not valid!, put the mouse over the red icon(s) to see the error", "Validation Error", MessageBoxButtons.OK, MessageBoxIcon.Error);

                return;
            }

            FindNow();
        }

        private void ctrlPersonCardWithFilter_Load(object sender, EventArgs e)
        {
            cbFilterBy.SelectedIndex = 0;

            txtFilterValue.Focus();
        }

        private void txtFilterValue_Validating(object sender, CancelEventArgs e)
        {
            if (string.IsNullOrEmpty(txtFilterValue.Text.Trim()))
            {
                e.Cancel = true;
                errorProvider1.SetError(txtFilterValue, "This field is required!");
            }
            else
            {
                // e.Cancel = false;
                errorProvider1.SetError(txtFilterValue, null);
            }
        }

        private void DataBackEvent(object sender, int personID)
        {
            // Handle the data received.
            cbFilterBy.SelectedIndex = 1;
            txtFilterValue.Text = personID.ToString();
            ctrlPersonCard1.LoadPersonInfo(personID);
        }

        private void btnAddNewPerson_Click(object sender, EventArgs e)
        {
            frmAddUpdatePerson frm1 = new frmAddUpdatePerson();

            // Subscribe to the event.
            frm1.DataBack += DataBackEvent;
            frm1.ShowDialog();

        }

        public void FilterFocus()
        {
            txtFilterValue.Focus();
        }

        private void txtFilterValue_KeyPress(object sender, KeyPressEventArgs e)
        {
            // Check if the pressed key is Enter (character code 13).
            if (e.KeyChar == (char)13)
            {
                btnFindPerson.PerformClick();
            }

            // This will allow only digits if person id is selected.
            if (cbFilterBy.Text == "Person ID")
            {
                e.Handled = !char.IsDigit(e.KeyChar) && !char.IsControl(e.KeyChar);
            }
        }
    }
}
