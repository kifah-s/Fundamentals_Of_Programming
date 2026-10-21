namespace DVLD.People.Controls
{
    partial class ctrlPersonCardWithFilter
    {
        /// <summary> 
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary> 
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Component Designer generated code

        /// <summary> 
        /// Required method for Designer support - do not modify 
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            components = new System.ComponentModel.Container();
            gbFilter = new GroupBox();
            btnAddNewPerson = new Button();
            btnFindPerson = new Button();
            txtFilterValue = new TextBox();
            cbFilterBy = new ComboBox();
            label1 = new Label();
            ctrlPersonCard1 = new ctrlPersonCard();
            errorProvider1 = new ErrorProvider(components);
            gbFilter.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)errorProvider1).BeginInit();
            SuspendLayout();
            // 
            // gbFilter
            // 
            gbFilter.BackColor = SystemColors.Control;
            gbFilter.Controls.Add(btnAddNewPerson);
            gbFilter.Controls.Add(btnFindPerson);
            gbFilter.Controls.Add(txtFilterValue);
            gbFilter.Controls.Add(cbFilterBy);
            gbFilter.Controls.Add(label1);
            gbFilter.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            gbFilter.Location = new Point(11, 1);
            gbFilter.Name = "gbFilter";
            gbFilter.Size = new Size(686, 84);
            gbFilter.TabIndex = 1;
            gbFilter.TabStop = false;
            gbFilter.Text = "Filter";
            // 
            // btnAddNewPerson
            // 
            btnAddNewPerson.BackColor = Color.White;
            btnAddNewPerson.FlatStyle = FlatStyle.Flat;
            btnAddNewPerson.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnAddNewPerson.Image = Properties.Resources.AddPer_32;
            btnAddNewPerson.Location = new Point(641, 32);
            btnAddNewPerson.Name = "btnAddNewPerson";
            btnAddNewPerson.Size = new Size(36, 36);
            btnAddNewPerson.TabIndex = 4;
            btnAddNewPerson.UseVisualStyleBackColor = false;
            btnAddNewPerson.Click += btnAddNewPerson_Click;
            // 
            // btnFindPerson
            // 
            btnFindPerson.BackColor = Color.White;
            btnFindPerson.FlatStyle = FlatStyle.Flat;
            btnFindPerson.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnFindPerson.Image = Properties.Resources.SearchPer;
            btnFindPerson.Location = new Point(594, 32);
            btnFindPerson.Name = "btnFindPerson";
            btnFindPerson.Size = new Size(36, 36);
            btnFindPerson.TabIndex = 3;
            btnFindPerson.UseVisualStyleBackColor = false;
            btnFindPerson.Click += btnFindPerson_Click;
            // 
            // txtFilterValue
            // 
            txtFilterValue.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            txtFilterValue.Location = new Point(340, 43);
            txtFilterValue.Name = "txtFilterValue";
            txtFilterValue.Size = new Size(243, 25);
            txtFilterValue.TabIndex = 2;
            txtFilterValue.KeyPress += txtFilterValue_KeyPress;
            // 
            // cbFilterBy
            // 
            cbFilterBy.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            cbFilterBy.FormattingEnabled = true;
            cbFilterBy.Location = new Point(86, 43);
            cbFilterBy.Name = "cbFilterBy";
            cbFilterBy.Size = new Size(243, 25);
            cbFilterBy.TabIndex = 2;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.Location = new Point(6, 47);
            label1.Name = "label1";
            label1.Size = new Size(74, 21);
            label1.TabIndex = 2;
            label1.Text = "Find By: ";
            // 
            // ctrlPersonCard1
            // 
            ctrlPersonCard1.AutoValidate = AutoValidate.EnableAllowFocusChange;
            ctrlPersonCard1.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            ctrlPersonCard1.Location = new Point(5, 77);
            ctrlPersonCard1.Margin = new Padding(4, 3, 4, 3);
            ctrlPersonCard1.Name = "ctrlPersonCard1";
            ctrlPersonCard1.Size = new Size(724, 309);
            ctrlPersonCard1.TabIndex = 2;
            // 
            // errorProvider1
            // 
            errorProvider1.ContainerControl = this;
            // 
            // ctrlPersonCardWithFilter
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            Controls.Add(gbFilter);
            Controls.Add(ctrlPersonCard1);
            Name = "ctrlPersonCardWithFilter";
            Size = new Size(730, 406);
            Load += ctrlPersonCardWithFilter_Load;
            gbFilter.ResumeLayout(false);
            gbFilter.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)errorProvider1).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private GroupBox gbFilter;
        private TextBox txtFilterValue;
        private ComboBox cbFilterBy;
        private Label label1;
        private Button btnFindPerson;
        private Button btnAddNewPerson;
        private ctrlPersonCard ctrlPersonCard1;
        private ErrorProvider errorProvider1;
    }
}
