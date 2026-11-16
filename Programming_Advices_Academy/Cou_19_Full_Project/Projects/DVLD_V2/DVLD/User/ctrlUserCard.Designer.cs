namespace DVLD.User
{
    partial class ctrlUserCard
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
            ctrlPersonCard1 = new DVLD.People.Controls.ctrlPersonCard();
            groupBox1 = new GroupBox();
            label1 = new Label();
            lblUserID = new Label();
            lblUserName = new Label();
            label3 = new Label();
            lblIsActive = new Label();
            label4 = new Label();
            groupBox1.SuspendLayout();
            SuspendLayout();
            // 
            // ctrlPersonCard1
            // 
            ctrlPersonCard1.BackColor = Color.White;
            ctrlPersonCard1.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            ctrlPersonCard1.Location = new Point(4, 0);
            ctrlPersonCard1.Margin = new Padding(4, 3, 4, 3);
            ctrlPersonCard1.Name = "ctrlPersonCard1";
            ctrlPersonCard1.Size = new Size(697, 302);
            ctrlPersonCard1.TabIndex = 0;
            // 
            // groupBox1
            // 
            groupBox1.BackColor = Color.White;
            groupBox1.Controls.Add(label4);
            groupBox1.Controls.Add(label3);
            groupBox1.Controls.Add(label1);
            groupBox1.Controls.Add(lblIsActive);
            groupBox1.Controls.Add(lblUserName);
            groupBox1.Controls.Add(lblUserID);
            groupBox1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            groupBox1.Location = new Point(10, 302);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(675, 100);
            groupBox1.TabIndex = 1;
            groupBox1.TabStop = false;
            groupBox1.Text = "Login Information";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            label1.Location = new Point(6, 46);
            label1.Name = "label1";
            label1.Size = new Size(69, 21);
            label1.TabIndex = 0;
            label1.Text = "User ID:";
            // 
            // lblUserID
            // 
            lblUserID.AutoSize = true;
            lblUserID.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            lblUserID.Location = new Point(81, 46);
            lblUserID.Name = "lblUserID";
            lblUserID.Size = new Size(38, 21);
            lblUserID.TabIndex = 1;
            lblUserID.Text = "????";
            // 
            // lblUserName
            // 
            lblUserName.AutoSize = true;
            lblUserName.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            lblUserName.Location = new Point(365, 46);
            lblUserName.Name = "lblUserName";
            lblUserName.Size = new Size(38, 21);
            lblUserName.TabIndex = 3;
            lblUserName.Text = "????";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            label3.Location = new Point(261, 46);
            label3.Name = "label3";
            label3.Size = new Size(98, 21);
            label3.TabIndex = 2;
            label3.Text = "User Name:";
            // 
            // lblIsActive
            // 
            lblIsActive.AutoSize = true;
            lblIsActive.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            lblIsActive.Location = new Point(631, 46);
            lblIsActive.Name = "lblIsActive";
            lblIsActive.Size = new Size(38, 21);
            lblIsActive.TabIndex = 5;
            lblIsActive.Text = "????";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 12F, FontStyle.Bold);
            label4.Location = new Point(547, 46);
            label4.Name = "label4";
            label4.Size = new Size(78, 21);
            label4.TabIndex = 4;
            label4.Text = "Is Active:";
            // 
            // ctrlUserCard
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            Controls.Add(groupBox1);
            Controls.Add(ctrlPersonCard1);
            Name = "ctrlUserCard";
            Size = new Size(701, 414);
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private People.Controls.ctrlPersonCard ctrlPersonCard1;
        private GroupBox groupBox1;
        private Label lblIsActive;
        private Label label4;
        private Label lblUserName;
        private Label label3;
        private Label lblUserID;
        private Label label1;
    }
}
