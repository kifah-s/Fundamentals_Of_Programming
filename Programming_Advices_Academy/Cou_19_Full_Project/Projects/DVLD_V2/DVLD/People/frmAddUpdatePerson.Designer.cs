namespace DVLD.People
{
    partial class frmAddUpdatePerson
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

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            lblTitle = new Label();
            label1 = new Label();
            groupBox1 = new GroupBox();
            btnRemoveImage = new Button();
            btnSetImage = new Button();
            pbPersonImage = new PictureBox();
            btnSave = new Button();
            btnClose = new Button();
            dtpDateOfBirth = new DateTimePicker();
            cbCountry = new ComboBox();
            txtAddress = new TextBox();
            rbFemale = new RadioButton();
            rbMale = new RadioButton();
            txtPhone = new TextBox();
            txtEmail = new TextBox();
            txtNationalNo = new TextBox();
            txtLastName = new TextBox();
            txtThirdName = new TextBox();
            txtSecondName = new TextBox();
            txtFirstName = new TextBox();
            label13 = new Label();
            label12 = new Label();
            label11 = new Label();
            label10 = new Label();
            label9 = new Label();
            label8 = new Label();
            label7 = new Label();
            label6 = new Label();
            label5 = new Label();
            label4 = new Label();
            label3 = new Label();
            label2 = new Label();
            lblPersonID = new Label();
            groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)pbPersonImage).BeginInit();
            SuspendLayout();
            // 
            // lblTitle
            // 
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Tahoma", 24F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(295, 9);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(279, 39);
            lblTitle.TabIndex = 0;
            lblTitle.Text = "Add New Person";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Tahoma", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.Black;
            label1.Location = new Point(12, 73);
            label1.Name = "label1";
            label1.Size = new Size(95, 19);
            label1.TabIndex = 1;
            label1.Text = "Person ID:";
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(btnRemoveImage);
            groupBox1.Controls.Add(btnSetImage);
            groupBox1.Controls.Add(pbPersonImage);
            groupBox1.Controls.Add(btnSave);
            groupBox1.Controls.Add(btnClose);
            groupBox1.Controls.Add(dtpDateOfBirth);
            groupBox1.Controls.Add(cbCountry);
            groupBox1.Controls.Add(txtAddress);
            groupBox1.Controls.Add(rbFemale);
            groupBox1.Controls.Add(rbMale);
            groupBox1.Controls.Add(txtPhone);
            groupBox1.Controls.Add(txtEmail);
            groupBox1.Controls.Add(txtNationalNo);
            groupBox1.Controls.Add(txtLastName);
            groupBox1.Controls.Add(txtThirdName);
            groupBox1.Controls.Add(txtSecondName);
            groupBox1.Controls.Add(txtFirstName);
            groupBox1.Controls.Add(label13);
            groupBox1.Controls.Add(label12);
            groupBox1.Controls.Add(label11);
            groupBox1.Controls.Add(label10);
            groupBox1.Controls.Add(label9);
            groupBox1.Controls.Add(label8);
            groupBox1.Controls.Add(label7);
            groupBox1.Controls.Add(label6);
            groupBox1.Controls.Add(label5);
            groupBox1.Controls.Add(label4);
            groupBox1.Controls.Add(label3);
            groupBox1.Controls.Add(label2);
            groupBox1.Location = new Point(16, 95);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(850, 383);
            groupBox1.TabIndex = 2;
            groupBox1.TabStop = false;
            // 
            // btnRemoveImage
            // 
            btnRemoveImage.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnRemoveImage.ForeColor = Color.Black;
            btnRemoveImage.Location = new Point(611, 338);
            btnRemoveImage.Name = "btnRemoveImage";
            btnRemoveImage.Size = new Size(233, 32);
            btnRemoveImage.TabIndex = 30;
            btnRemoveImage.Text = "Remove Image";
            btnRemoveImage.UseVisualStyleBackColor = true;
            // 
            // btnSetImage
            // 
            btnSetImage.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnSetImage.ForeColor = Color.Black;
            btnSetImage.Location = new Point(611, 300);
            btnSetImage.Name = "btnSetImage";
            btnSetImage.Size = new Size(233, 32);
            btnSetImage.TabIndex = 29;
            btnSetImage.Text = "Set Image";
            btnSetImage.UseVisualStyleBackColor = true;
            // 
            // pbPersonImage
            // 
            pbPersonImage.Image = Properties.Resources.businessman;
            pbPersonImage.Location = new Point(611, 95);
            pbPersonImage.Name = "pbPersonImage";
            pbPersonImage.Size = new Size(233, 199);
            pbPersonImage.SizeMode = PictureBoxSizeMode.Zoom;
            pbPersonImage.TabIndex = 28;
            pbPersonImage.TabStop = false;
            // 
            // btnSave
            // 
            btnSave.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnSave.Location = new Point(357, 338);
            btnSave.Name = "btnSave";
            btnSave.Size = new Size(114, 32);
            btnSave.TabIndex = 27;
            btnSave.Text = "Save";
            btnSave.UseVisualStyleBackColor = true;
            // 
            // btnClose
            // 
            btnClose.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(207, 338);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(114, 32);
            btnClose.TabIndex = 3;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = true;
            // 
            // dtpDateOfBirth
            // 
            dtpDateOfBirth.CalendarFont = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            dtpDateOfBirth.CustomFormat = "dd/M/yyyy";
            dtpDateOfBirth.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            dtpDateOfBirth.Format = DateTimePickerFormat.Custom;
            dtpDateOfBirth.Location = new Point(395, 97);
            dtpDateOfBirth.Name = "dtpDateOfBirth";
            dtpDateOfBirth.Size = new Size(200, 23);
            dtpDateOfBirth.TabIndex = 26;
            // 
            // cbCountry
            // 
            cbCountry.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            cbCountry.FormattingEnabled = true;
            cbCountry.Location = new Point(357, 180);
            cbCountry.Name = "cbCountry";
            cbCountry.Size = new Size(238, 24);
            cbCountry.TabIndex = 25;
            // 
            // txtAddress
            // 
            txtAddress.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtAddress.Location = new Point(88, 220);
            txtAddress.Multiline = true;
            txtAddress.Name = "txtAddress";
            txtAddress.Size = new Size(507, 112);
            txtAddress.TabIndex = 24;
            // 
            // rbFemale
            // 
            rbFemale.AutoSize = true;
            rbFemale.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            rbFemale.Location = new Point(145, 140);
            rbFemale.Name = "rbFemale";
            rbFemale.Size = new Size(67, 20);
            rbFemale.TabIndex = 23;
            rbFemale.TabStop = true;
            rbFemale.Text = "Female";
            rbFemale.UseVisualStyleBackColor = true;
            rbFemale.Click += rbFemale_Click;
            // 
            // rbMale
            // 
            rbMale.AutoSize = true;
            rbMale.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            rbMale.Location = new Point(87, 140);
            rbMale.Name = "rbMale";
            rbMale.Size = new Size(52, 20);
            rbMale.TabIndex = 22;
            rbMale.TabStop = true;
            rbMale.Text = "Male";
            rbMale.UseVisualStyleBackColor = true;
            rbMale.Click += rbMale_Click;
            // 
            // txtPhone
            // 
            txtPhone.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtPhone.Location = new Point(357, 138);
            txtPhone.Name = "txtPhone";
            txtPhone.Size = new Size(238, 23);
            txtPhone.TabIndex = 21;
            // 
            // txtEmail
            // 
            txtEmail.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtEmail.Location = new Point(88, 179);
            txtEmail.Name = "txtEmail";
            txtEmail.Size = new Size(170, 23);
            txtEmail.TabIndex = 20;
            // 
            // txtNationalNo
            // 
            txtNationalNo.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtNationalNo.Location = new Point(87, 95);
            txtNationalNo.Name = "txtNationalNo";
            txtNationalNo.Size = new Size(170, 23);
            txtNationalNo.TabIndex = 19;
            // 
            // txtLastName
            // 
            txtLastName.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtLastName.Location = new Point(672, 55);
            txtLastName.Name = "txtLastName";
            txtLastName.Size = new Size(170, 23);
            txtLastName.TabIndex = 18;
            // 
            // txtThirdName
            // 
            txtThirdName.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtThirdName.Location = new Point(477, 55);
            txtThirdName.Name = "txtThirdName";
            txtThirdName.Size = new Size(170, 23);
            txtThirdName.TabIndex = 17;
            // 
            // txtSecondName
            // 
            txtSecondName.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtSecondName.Location = new Point(282, 55);
            txtSecondName.Name = "txtSecondName";
            txtSecondName.Size = new Size(170, 23);
            txtSecondName.TabIndex = 16;
            // 
            // txtFirstName
            // 
            txtFirstName.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtFirstName.Location = new Point(87, 55);
            txtFirstName.Name = "txtFirstName";
            txtFirstName.Size = new Size(170, 23);
            txtFirstName.TabIndex = 15;
            // 
            // label13
            // 
            label13.AutoSize = true;
            label13.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label13.ForeColor = Color.Black;
            label13.Location = new Point(669, 33);
            label13.Name = "label13";
            label13.Size = new Size(35, 16);
            label13.TabIndex = 14;
            label13.Text = "Last:";
            // 
            // label12
            // 
            label12.AutoSize = true;
            label12.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label12.ForeColor = Color.Black;
            label12.Location = new Point(474, 33);
            label12.Name = "label12";
            label12.Size = new Size(42, 16);
            label12.TabIndex = 13;
            label12.Text = "Third:";
            // 
            // label11
            // 
            label11.AutoSize = true;
            label11.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label11.ForeColor = Color.Black;
            label11.Location = new Point(279, 33);
            label11.Name = "label11";
            label11.Size = new Size(54, 16);
            label11.TabIndex = 12;
            label11.Text = "Second:";
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Font = new Font("Tahoma", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            label10.ForeColor = Color.Black;
            label10.Location = new Point(85, 33);
            label10.Name = "label10";
            label10.Size = new Size(37, 16);
            label10.TabIndex = 11;
            label10.Text = "First:";
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label9.ForeColor = Color.Black;
            label9.Location = new Point(279, 186);
            label9.Name = "label9";
            label9.Size = new Size(72, 18);
            label9.TabIndex = 10;
            label9.Text = "Country:";
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label8.ForeColor = Color.Black;
            label8.Location = new Point(279, 143);
            label8.Name = "label8";
            label8.Size = new Size(59, 18);
            label8.TabIndex = 9;
            label8.Text = "Phone:";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label7.ForeColor = Color.Black;
            label7.Location = new Point(278, 100);
            label7.Name = "label7";
            label7.Size = new Size(111, 18);
            label7.TabIndex = 8;
            label7.Text = "Date Of Birth:";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label6.ForeColor = Color.Black;
            label6.Location = new Point(8, 220);
            label6.Name = "label6";
            label6.Size = new Size(73, 18);
            label6.TabIndex = 7;
            label6.Text = "Address:";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label5.ForeColor = Color.Black;
            label5.Location = new Point(8, 180);
            label5.Name = "label5";
            label5.Size = new Size(54, 18);
            label5.TabIndex = 6;
            label5.Text = "Email:";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label4.ForeColor = Color.Black;
            label4.Location = new Point(8, 140);
            label4.Name = "label4";
            label4.Size = new Size(67, 18);
            label4.TabIndex = 5;
            label4.Text = "Gendor:";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.ForeColor = Color.Black;
            label3.Location = new Point(8, 100);
            label3.Name = "label3";
            label3.Size = new Size(70, 18);
            label3.TabIndex = 4;
            label3.Text = "Nati No:";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(8, 60);
            label2.Name = "label2";
            label2.Size = new Size(56, 18);
            label2.TabIndex = 3;
            label2.Text = "Name:";
            // 
            // lblPersonID
            // 
            lblPersonID.AutoSize = true;
            lblPersonID.Font = new Font("Tahoma", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblPersonID.ForeColor = Color.Black;
            lblPersonID.Location = new Point(113, 73);
            lblPersonID.Name = "lblPersonID";
            lblPersonID.Size = new Size(42, 19);
            lblPersonID.TabIndex = 3;
            lblPersonID.Text = "N/A";
            // 
            // frmAddUpdatePerson
            // 
            AutoScaleDimensions = new SizeF(6F, 13F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            ClientSize = new Size(878, 490);
            Controls.Add(lblPersonID);
            Controls.Add(groupBox1);
            Controls.Add(label1);
            Controls.Add(lblTitle);
            Font = new Font("Tahoma", 8.25F, FontStyle.Regular, GraphicsUnit.Point, 0);
            FormBorderStyle = FormBorderStyle.FixedToolWindow;
            Name = "frmAddUpdatePerson";
            Text = "Add / Edit Person Info.";
            Load += frmAddUpdatePerson_Load;
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)pbPersonImage).EndInit();
            ResumeLayout(false);
            PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label lblTitle;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtLastName;
        private System.Windows.Forms.TextBox txtThirdName;
        private System.Windows.Forms.TextBox txtSecondName;
        private System.Windows.Forms.TextBox txtFirstName;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.RadioButton rbFemale;
        private System.Windows.Forms.RadioButton rbMale;
        private System.Windows.Forms.TextBox txtPhone;
        private System.Windows.Forms.TextBox txtEmail;
        private System.Windows.Forms.TextBox txtNationalNo;
        private System.Windows.Forms.TextBox txtAddress;
        private System.Windows.Forms.DateTimePicker dtpDateOfBirth;
        private System.Windows.Forms.ComboBox cbCountry;
        private System.Windows.Forms.Button btnSave;
        private System.Windows.Forms.Button btnClose;
        private System.Windows.Forms.Button btnRemoveImage;
        private System.Windows.Forms.Button btnSetImage;
        private System.Windows.Forms.PictureBox pbPersonImage;
        private System.Windows.Forms.Label lblPersonID;
    }
}