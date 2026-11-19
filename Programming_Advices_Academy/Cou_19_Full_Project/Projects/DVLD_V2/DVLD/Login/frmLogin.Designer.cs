namespace DVLD.Login
{
    partial class frmLogin
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
            splitContainer1 = new SplitContainer();
            label4 = new Label();
            label3 = new Label();
            label2 = new Label();
            label1 = new Label();
            pictureBox1 = new PictureBox();
            btnClose = new Button();
            btnLogin = new Button();
            chkRememberMe = new CheckBox();
            txtPassword = new TextBox();
            txtUserName = new TextBox();
            label7 = new Label();
            label6 = new Label();
            label5 = new Label();
            ((System.ComponentModel.ISupportInitialize)splitContainer1).BeginInit();
            splitContainer1.Panel1.SuspendLayout();
            splitContainer1.Panel2.SuspendLayout();
            splitContainer1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // splitContainer1
            // 
            splitContainer1.Dock = DockStyle.Fill;
            splitContainer1.Location = new Point(0, 0);
            splitContainer1.Name = "splitContainer1";
            // 
            // splitContainer1.Panel1
            // 
            splitContainer1.Panel1.BackColor = Color.Black;
            splitContainer1.Panel1.Controls.Add(label4);
            splitContainer1.Panel1.Controls.Add(label3);
            splitContainer1.Panel1.Controls.Add(label2);
            splitContainer1.Panel1.Controls.Add(label1);
            splitContainer1.Panel1.Controls.Add(pictureBox1);
            // 
            // splitContainer1.Panel2
            // 
            splitContainer1.Panel2.BackColor = Color.White;
            splitContainer1.Panel2.Controls.Add(btnClose);
            splitContainer1.Panel2.Controls.Add(btnLogin);
            splitContainer1.Panel2.Controls.Add(chkRememberMe);
            splitContainer1.Panel2.Controls.Add(txtPassword);
            splitContainer1.Panel2.Controls.Add(txtUserName);
            splitContainer1.Panel2.Controls.Add(label7);
            splitContainer1.Panel2.Controls.Add(label6);
            splitContainer1.Panel2.Controls.Add(label5);
            splitContainer1.Size = new Size(800, 450);
            splitContainer1.SplitterDistance = 394;
            splitContainer1.TabIndex = 0;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label4.ForeColor = Color.White;
            label4.Location = new Point(12, 424);
            label4.Name = "label4";
            label4.Size = new Size(76, 17);
            label4.TabIndex = 4;
            label4.Text = "Version 2.0";
            label4.TextAlign = ContentAlignment.TopCenter;
            // 
            // label3
            // 
            label3.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.ForeColor = Color.White;
            label3.Location = new Point(79, 360);
            label3.Name = "label3";
            label3.Size = new Size(213, 41);
            label3.TabIndex = 3;
            label3.Text = "(DVLD) System";
            label3.TextAlign = ContentAlignment.TopCenter;
            // 
            // label2
            // 
            label2.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.White;
            label2.Location = new Point(48, 284);
            label2.Name = "label2";
            label2.Size = new Size(267, 74);
            label2.TabIndex = 2;
            label2.Text = "Driving && Vehicle License Department";
            label2.TextAlign = ContentAlignment.TopCenter;
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.White;
            label1.Location = new Point(118, 251);
            label1.Name = "label1";
            label1.Size = new Size(132, 30);
            label1.TabIndex = 1;
            label1.Text = "Welcome To";
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources.IconLogo;
            pictureBox1.Location = new Point(79, 44);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(220, 189);
            pictureBox1.SizeMode = PictureBoxSizeMode.Zoom;
            pictureBox1.TabIndex = 0;
            pictureBox1.TabStop = false;
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.White;
            btnClose.BackgroundImage = Properties.Resources.CloseBlack;
            btnClose.BackgroundImageLayout = ImageLayout.Zoom;
            btnClose.FlatAppearance.BorderSize = 0;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Location = new Point(371, 9);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(25, 22);
            btnClose.TabIndex = 12;
            btnClose.UseVisualStyleBackColor = false;
            btnClose.Click += btnClose_Click;
            // 
            // btnLogin
            // 
            btnLogin.BackColor = Color.Black;
            btnLogin.FlatAppearance.BorderSize = 0;
            btnLogin.FlatStyle = FlatStyle.Flat;
            btnLogin.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnLogin.ForeColor = Color.White;
            btnLogin.Location = new Point(175, 366);
            btnLogin.Name = "btnLogin";
            btnLogin.Size = new Size(88, 35);
            btnLogin.TabIndex = 11;
            btnLogin.Text = "LogIn";
            btnLogin.TextAlign = ContentAlignment.TopCenter;
            btnLogin.UseVisualStyleBackColor = false;
            btnLogin.Click += btnLogin_Click;
            // 
            // chkRememberMe
            // 
            chkRememberMe.AutoSize = true;
            chkRememberMe.Font = new Font("Segoe UI", 9.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            chkRememberMe.Location = new Point(117, 214);
            chkRememberMe.Name = "chkRememberMe";
            chkRememberMe.Size = new Size(120, 21);
            chkRememberMe.TabIndex = 10;
            chkRememberMe.Text = "Remember Me.";
            chkRememberMe.UseVisualStyleBackColor = true;
            // 
            // txtPassword
            // 
            txtPassword.Location = new Point(117, 173);
            txtPassword.Name = "txtPassword";
            txtPassword.Size = new Size(252, 23);
            txtPassword.TabIndex = 9;
            // 
            // txtUserName
            // 
            txtUserName.Location = new Point(117, 138);
            txtUserName.Name = "txtUserName";
            txtUserName.Size = new Size(252, 23);
            txtUserName.TabIndex = 8;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label7.ForeColor = Color.Black;
            label7.Location = new Point(8, 173);
            label7.Name = "label7";
            label7.Size = new Size(97, 21);
            label7.TabIndex = 7;
            label7.Text = "• Password:";
            label7.TextAlign = ContentAlignment.TopCenter;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label6.ForeColor = Color.Black;
            label6.Location = new Point(8, 140);
            label6.Name = "label6";
            label6.Size = new Size(105, 21);
            label6.TabIndex = 6;
            label6.Text = "• UserName:";
            label6.TextAlign = ContentAlignment.TopCenter;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Font = new Font("Segoe UI", 15.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label5.ForeColor = Color.Black;
            label5.Location = new Point(87, 71);
            label5.Name = "label5";
            label5.Size = new Size(237, 30);
            label5.TabIndex = 5;
            label5.Text = "Login To Your Account";
            label5.TextAlign = ContentAlignment.TopCenter;
            // 
            // frmLogin
            // 
            AcceptButton = btnLogin;
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(splitContainer1);
            FormBorderStyle = FormBorderStyle.None;
            Name = "frmLogin";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "frmLogin";
            splitContainer1.Panel1.ResumeLayout(false);
            splitContainer1.Panel1.PerformLayout();
            splitContainer1.Panel2.ResumeLayout(false);
            splitContainer1.Panel2.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)splitContainer1).EndInit();
            splitContainer1.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ResumeLayout(false);
        }

        #endregion

        private SplitContainer splitContainer1;
        private PictureBox pictureBox1;
        private Label label2;
        private Label label1;
        private Label label4;
        private Label label3;
        private Label label5;
        private CheckBox chkRememberMe;
        private TextBox txtPassword;
        private TextBox txtUserName;
        private Label label7;
        private Label label6;
        private Button btnLogin;
        private Button btnClose;
    }
}