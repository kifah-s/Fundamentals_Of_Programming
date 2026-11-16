namespace DVLD.User
{
    partial class frmAddUpdateUser
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
            components = new System.ComponentModel.Container();
            lblTitle = new Label();
            tcUserInfo = new TabControl();
            tpPersonalInfo = new TabPage();
            btnPersonInfoNext = new Button();
            ctrlPersonCardWithFilter1 = new DVLD.People.Controls.ctrlPersonCardWithFilter();
            tpLoginInfo = new TabPage();
            chkIsActive = new CheckBox();
            txtConfirmPassword = new TextBox();
            txtPassword = new TextBox();
            txtUserName = new TextBox();
            lblUserID = new Label();
            label4 = new Label();
            label3 = new Label();
            label1 = new Label();
            label2 = new Label();
            btnSave = new Button();
            btnClose = new Button();
            errorProvider1 = new ErrorProvider(components);
            tcUserInfo.SuspendLayout();
            tpPersonalInfo.SuspendLayout();
            tpLoginInfo.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)errorProvider1).BeginInit();
            SuspendLayout();
            // 
            // lblTitle
            // 
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(218, 11);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(292, 37);
            lblTitle.TabIndex = 0;
            lblTitle.Text = "Edit Application Type";
            lblTitle.TextAlign = ContentAlignment.TopCenter;
            // 
            // tcUserInfo
            // 
            tcUserInfo.Controls.Add(tpPersonalInfo);
            tcUserInfo.Controls.Add(tpLoginInfo);
            tcUserInfo.Location = new Point(12, 56);
            tcUserInfo.Name = "tcUserInfo";
            tcUserInfo.SelectedIndex = 0;
            tcUserInfo.Size = new Size(731, 462);
            tcUserInfo.TabIndex = 1;
            // 
            // tpPersonalInfo
            // 
            tpPersonalInfo.BackColor = Color.White;
            tpPersonalInfo.Controls.Add(btnPersonInfoNext);
            tpPersonalInfo.Controls.Add(ctrlPersonCardWithFilter1);
            tpPersonalInfo.Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point, 0);
            tpPersonalInfo.Location = new Point(4, 24);
            tpPersonalInfo.Name = "tpPersonalInfo";
            tpPersonalInfo.Padding = new Padding(3);
            tpPersonalInfo.Size = new Size(723, 434);
            tpPersonalInfo.TabIndex = 0;
            tpPersonalInfo.Text = "Personal Info";
            // 
            // btnPersonInfoNext
            // 
            btnPersonInfoNext.BackColor = Color.Transparent;
            btnPersonInfoNext.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnPersonInfoNext.Location = new Point(597, 391);
            btnPersonInfoNext.Name = "btnPersonInfoNext";
            btnPersonInfoNext.Size = new Size(114, 32);
            btnPersonInfoNext.TabIndex = 28;
            btnPersonInfoNext.Text = "Next";
            btnPersonInfoNext.UseVisualStyleBackColor = false;
            btnPersonInfoNext.Click += btnPersonInfoNext_Click;
            // 
            // ctrlPersonCardWithFilter1
            // 
            ctrlPersonCardWithFilter1.BackColor = Color.Transparent;
            ctrlPersonCardWithFilter1.FilterEnabled = true;
            ctrlPersonCardWithFilter1.Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlPersonCardWithFilter1.Location = new Point(-4, 6);
            ctrlPersonCardWithFilter1.Name = "ctrlPersonCardWithFilter1";
            ctrlPersonCardWithFilter1.ShowAddPerson = true;
            ctrlPersonCardWithFilter1.Size = new Size(720, 425);
            ctrlPersonCardWithFilter1.TabIndex = 0;
            // 
            // tpLoginInfo
            // 
            tpLoginInfo.Controls.Add(chkIsActive);
            tpLoginInfo.Controls.Add(txtConfirmPassword);
            tpLoginInfo.Controls.Add(txtPassword);
            tpLoginInfo.Controls.Add(txtUserName);
            tpLoginInfo.Controls.Add(lblUserID);
            tpLoginInfo.Controls.Add(label4);
            tpLoginInfo.Controls.Add(label3);
            tpLoginInfo.Controls.Add(label1);
            tpLoginInfo.Controls.Add(label2);
            tpLoginInfo.Location = new Point(4, 24);
            tpLoginInfo.Name = "tpLoginInfo";
            tpLoginInfo.Padding = new Padding(3);
            tpLoginInfo.Size = new Size(723, 434);
            tpLoginInfo.TabIndex = 1;
            tpLoginInfo.Text = "Login Info";
            tpLoginInfo.UseVisualStyleBackColor = true;
            // 
            // chkIsActive
            // 
            chkIsActive.AutoSize = true;
            chkIsActive.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            chkIsActive.Location = new Point(164, 180);
            chkIsActive.Name = "chkIsActive";
            chkIsActive.Size = new Size(93, 25);
            chkIsActive.TabIndex = 30;
            chkIsActive.Text = "Is Active";
            chkIsActive.UseVisualStyleBackColor = true;
            // 
            // txtConfirmPassword
            // 
            txtConfirmPassword.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            txtConfirmPassword.Location = new Point(164, 138);
            txtConfirmPassword.Name = "txtConfirmPassword";
            txtConfirmPassword.Size = new Size(202, 23);
            txtConfirmPassword.TabIndex = 7;
            txtConfirmPassword.Validating += txtConfirmPassword_Validating;
            // 
            // txtPassword
            // 
            txtPassword.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            txtPassword.Location = new Point(164, 102);
            txtPassword.Name = "txtPassword";
            txtPassword.Size = new Size(202, 23);
            txtPassword.TabIndex = 6;
            txtPassword.Validating += txtPassword_Validating;
            // 
            // txtUserName
            // 
            txtUserName.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            txtUserName.Location = new Point(164, 66);
            txtUserName.Name = "txtUserName";
            txtUserName.Size = new Size(202, 23);
            txtUserName.TabIndex = 5;
            txtUserName.Validating += txtUserName_Validating;
            // 
            // lblUserID
            // 
            lblUserID.AutoSize = true;
            lblUserID.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblUserID.Location = new Point(164, 32);
            lblUserID.Name = "lblUserID";
            lblUserID.Size = new Size(38, 21);
            lblUserID.TabIndex = 4;
            lblUserID.Text = "????";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label4.Location = new Point(6, 140);
            label4.Name = "label4";
            label4.Size = new Size(152, 21);
            label4.TabIndex = 3;
            label4.Text = "Confirm Password:";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.Location = new Point(6, 104);
            label3.Name = "label3";
            label3.Size = new Size(86, 21);
            label3.TabIndex = 2;
            label3.Text = "Password:";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.Location = new Point(6, 68);
            label1.Name = "label1";
            label1.Size = new Size(94, 21);
            label1.TabIndex = 1;
            label1.Text = "UserName:";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.Location = new Point(6, 32);
            label2.Name = "label2";
            label2.Size = new Size(65, 21);
            label2.TabIndex = 0;
            label2.Text = "UserID:";
            // 
            // btnSave
            // 
            btnSave.BackColor = Color.Transparent;
            btnSave.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnSave.Location = new Point(414, 524);
            btnSave.Name = "btnSave";
            btnSave.Size = new Size(114, 32);
            btnSave.TabIndex = 28;
            btnSave.Text = "Save";
            btnSave.UseVisualStyleBackColor = false;
            btnSave.Click += btnSave_Click;
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(178, 524);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(114, 32);
            btnClose.TabIndex = 29;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            // 
            // errorProvider1
            // 
            errorProvider1.ContainerControl = this;
            // 
            // frmAddUpdateUser
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            ClientSize = new Size(758, 567);
            Controls.Add(btnClose);
            Controls.Add(btnSave);
            Controls.Add(tcUserInfo);
            Controls.Add(lblTitle);
            Name = "frmAddUpdateUser";
            Text = "frmAddUpdateUser";
            Activated += frmAddUpdateUser_Activated;
            Load += frmAddUpdateUser_Load;
            tcUserInfo.ResumeLayout(false);
            tpPersonalInfo.ResumeLayout(false);
            tpLoginInfo.ResumeLayout(false);
            tpLoginInfo.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)errorProvider1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label lblTitle;
        private TabControl tcUserInfo;
        private TabPage tpPersonalInfo;
        private TabPage tpLoginInfo;
        private People.Controls.ctrlPersonCardWithFilter ctrlPersonCardWithFilter1;
        private Button btnSave;
        private Button btnClose;
        private Button btnPersonInfoNext;
        private Label label2;
        private Label label4;
        private Label label3;
        private Label label1;
        private CheckBox chkIsActive;
        private TextBox txtConfirmPassword;
        private TextBox txtPassword;
        private TextBox txtUserName;
        private Label lblUserID;
        private ErrorProvider errorProvider1;
    }
}