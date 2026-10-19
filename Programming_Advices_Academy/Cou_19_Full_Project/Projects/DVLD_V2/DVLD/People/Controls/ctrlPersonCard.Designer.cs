namespace DVLD.People.Controls
{
    partial class ctrlPersonCard
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
            groupBox1 = new GroupBox();
            btnEditPersonInfo = new Button();
            pbPersonImage = new PictureBox();
            lblCountry = new Label();
            lblPhone = new Label();
            lblDateOfBirth = new Label();
            label9 = new Label();
            label8 = new Label();
            label7 = new Label();
            lblAddress = new Label();
            lblEmail = new Label();
            lblGendor = new Label();
            lblNationalNO = new Label();
            lblFullName = new Label();
            lblPersonID = new Label();
            label6 = new Label();
            label5 = new Label();
            label4 = new Label();
            label3 = new Label();
            label2 = new Label();
            label1 = new Label();
            groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)pbPersonImage).BeginInit();
            SuspendLayout();
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(btnEditPersonInfo);
            groupBox1.Controls.Add(pbPersonImage);
            groupBox1.Controls.Add(lblCountry);
            groupBox1.Controls.Add(lblPhone);
            groupBox1.Controls.Add(lblDateOfBirth);
            groupBox1.Controls.Add(label9);
            groupBox1.Controls.Add(label8);
            groupBox1.Controls.Add(label7);
            groupBox1.Controls.Add(lblAddress);
            groupBox1.Controls.Add(lblEmail);
            groupBox1.Controls.Add(lblGendor);
            groupBox1.Controls.Add(lblNationalNO);
            groupBox1.Controls.Add(lblFullName);
            groupBox1.Controls.Add(lblPersonID);
            groupBox1.Controls.Add(label6);
            groupBox1.Controls.Add(label5);
            groupBox1.Controls.Add(label4);
            groupBox1.Controls.Add(label3);
            groupBox1.Controls.Add(label2);
            groupBox1.Controls.Add(label1);
            groupBox1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            groupBox1.Location = new Point(21, 20);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(686, 284);
            groupBox1.TabIndex = 0;
            groupBox1.TabStop = false;
            groupBox1.Text = "Person Information";
            // 
            // btnEditPersonInfo
            // 
            btnEditPersonInfo.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnEditPersonInfo.Location = new Point(465, 49);
            btnEditPersonInfo.Name = "btnEditPersonInfo";
            btnEditPersonInfo.Size = new Size(215, 30);
            btnEditPersonInfo.TabIndex = 19;
            btnEditPersonInfo.Text = "Edit Person Info";
            btnEditPersonInfo.UseVisualStyleBackColor = true;
            btnEditPersonInfo.Click += btnEditPersonInfo_Click;
            // 
            // pbPersonImage
            // 
            pbPersonImage.BackColor = Color.White;
            pbPersonImage.BackgroundImageLayout = ImageLayout.Zoom;
            pbPersonImage.BorderStyle = BorderStyle.FixedSingle;
            pbPersonImage.ErrorImage = null;
            pbPersonImage.Image = Properties.Resources.businessman;
            pbPersonImage.Location = new Point(465, 95);
            pbPersonImage.Name = "pbPersonImage";
            pbPersonImage.Size = new Size(215, 159);
            pbPersonImage.SizeMode = PictureBoxSizeMode.Zoom;
            pbPersonImage.TabIndex = 18;
            pbPersonImage.TabStop = false;
            // 
            // lblCountry
            // 
            lblCountry.AutoSize = true;
            lblCountry.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblCountry.Location = new Point(350, 187);
            lblCountry.Name = "lblCountry";
            lblCountry.Size = new Size(57, 21);
            lblCountry.TabIndex = 17;
            lblCountry.Text = "[?????]";
            // 
            // lblPhone
            // 
            lblPhone.AutoSize = true;
            lblPhone.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblPhone.Location = new Point(350, 141);
            lblPhone.Name = "lblPhone";
            lblPhone.Size = new Size(57, 21);
            lblPhone.TabIndex = 16;
            lblPhone.Text = "[?????]";
            // 
            // lblDateOfBirth
            // 
            lblDateOfBirth.AutoSize = true;
            lblDateOfBirth.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblDateOfBirth.Location = new Point(350, 95);
            lblDateOfBirth.Name = "lblDateOfBirth";
            lblDateOfBirth.Size = new Size(57, 21);
            lblDateOfBirth.TabIndex = 15;
            lblDateOfBirth.Text = "[?????]";
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label9.Location = new Point(227, 187);
            label9.Name = "label9";
            label9.Size = new Size(80, 21);
            label9.TabIndex = 14;
            label9.Text = "Country: ";
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label8.Location = new Point(227, 141);
            label8.Name = "label8";
            label8.Size = new Size(67, 21);
            label8.TabIndex = 13;
            label8.Text = "Phone: ";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label7.Location = new Point(227, 95);
            label7.Name = "label7";
            label7.Size = new Size(117, 21);
            label7.TabIndex = 12;
            label7.Text = "Date Of Birth: ";
            // 
            // lblAddress
            // 
            lblAddress.AutoSize = true;
            lblAddress.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblAddress.Location = new Point(350, 233);
            lblAddress.Name = "lblAddress";
            lblAddress.Size = new Size(57, 21);
            lblAddress.TabIndex = 11;
            lblAddress.Text = "[?????]";
            // 
            // lblEmail
            // 
            lblEmail.AutoSize = true;
            lblEmail.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblEmail.Location = new Point(124, 233);
            lblEmail.Name = "lblEmail";
            lblEmail.Size = new Size(57, 21);
            lblEmail.TabIndex = 10;
            lblEmail.Text = "[?????]";
            // 
            // lblGendor
            // 
            lblGendor.AutoSize = true;
            lblGendor.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblGendor.Location = new Point(124, 187);
            lblGendor.Name = "lblGendor";
            lblGendor.Size = new Size(57, 21);
            lblGendor.TabIndex = 9;
            lblGendor.Text = "[?????]";
            // 
            // lblNationalNO
            // 
            lblNationalNO.AutoSize = true;
            lblNationalNO.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblNationalNO.Location = new Point(124, 141);
            lblNationalNO.Name = "lblNationalNO";
            lblNationalNO.Size = new Size(57, 21);
            lblNationalNO.TabIndex = 8;
            lblNationalNO.Text = "[?????]";
            // 
            // lblFullName
            // 
            lblFullName.AutoSize = true;
            lblFullName.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblFullName.Location = new Point(124, 95);
            lblFullName.Name = "lblFullName";
            lblFullName.Size = new Size(57, 21);
            lblFullName.TabIndex = 7;
            lblFullName.Text = "[?????]";
            // 
            // lblPersonID
            // 
            lblPersonID.AutoSize = true;
            lblPersonID.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblPersonID.Location = new Point(124, 49);
            lblPersonID.Name = "lblPersonID";
            lblPersonID.Size = new Size(57, 21);
            lblPersonID.TabIndex = 6;
            lblPersonID.Text = "[?????]";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label6.Location = new Point(227, 233);
            label6.Name = "label6";
            label6.Size = new Size(78, 21);
            label6.TabIndex = 5;
            label6.Text = "Address: ";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label5.Location = new Point(6, 233);
            label5.Name = "label5";
            label5.Size = new Size(61, 21);
            label5.TabIndex = 4;
            label5.Text = "Email: ";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label4.Location = new Point(6, 187);
            label4.Name = "label4";
            label4.Size = new Size(75, 21);
            label4.TabIndex = 3;
            label4.Text = "Gendor: ";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.Location = new Point(6, 141);
            label3.Name = "label3";
            label3.Size = new Size(112, 21);
            label3.TabIndex = 2;
            label3.Text = "National No: ";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.Location = new Point(6, 95);
            label2.Name = "label2";
            label2.Size = new Size(64, 21);
            label2.TabIndex = 1;
            label2.Text = "Name: ";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.Location = new Point(6, 49);
            label1.Name = "label1";
            label1.Size = new Size(91, 21);
            label1.TabIndex = 0;
            label1.Text = "Person ID: ";
            // 
            // ctrlPersonCard
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            Controls.Add(groupBox1);
            Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            Margin = new Padding(4, 3, 4, 3);
            Name = "ctrlPersonCard";
            Size = new Size(736, 331);
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)pbPersonImage).EndInit();
            ResumeLayout(false);

        }

        #endregion

        private GroupBox groupBox1;
        private Label label6;
        private Label label5;
        private Label label4;
        private Label label3;
        private Label label2;
        private Label label1;
        private Label lblPersonID;
        private Label label8;
        private Label label7;
        private Label lblAddress;
        private Label lblEmail;
        private Label lblGendor;
        private Label lblNationalNO;
        private Label lblFullName;
        private PictureBox pbPersonImage;
        private Label lblCountry;
        private Label lblPhone;
        private Label lblDateOfBirth;
        private Label label9;
        private Button btnEditPersonInfo;
    }
}
