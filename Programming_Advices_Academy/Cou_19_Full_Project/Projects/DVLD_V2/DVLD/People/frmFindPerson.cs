namespace DVLD.People
{
    public partial class frmFindPerson : Form
    {
        // Declare a delegate.
        public delegate void DataBackEventHandler(object sender, int personID);

        // Declare an event using delegate.
        public event DataBackEventHandler DataBack;

        public frmFindPerson()
        {
            InitializeComponent();
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            // Trigger the event to send data back to the caller form.
            DataBack?.Invoke(this, ctrlPersonCardWithFilter1.PersonID);
        }
    }
}
