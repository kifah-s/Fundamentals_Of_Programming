namespace DVLD.People
{
    partial class frmShowPersonInfo
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
            ctrlPersonCard1 = new DVLD.People.Controls.ctrlPersonCard();
            lblTitle = new Label();
            btnClose = new Button();
            SuspendLayout();
            // 
            // ctrlPersonCard1
            // 
            ctrlPersonCard1.Font = new Font("Segoe UI", 9F, FontStyle.Bold, GraphicsUnit.Point, 0);
            ctrlPersonCard1.Location = new Point(13, 77);
            ctrlPersonCard1.Margin = new Padding(4, 3, 4, 3);
            ctrlPersonCard1.Name = "ctrlPersonCard1";
            ctrlPersonCard1.Size = new Size(707, 302);
            ctrlPersonCard1.TabIndex = 0;
            // 
            // lblTitle
            // 
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 21.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(228, 19);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(212, 40);
            lblTitle.TabIndex = 1;
            lblTitle.Text = "Person Details";
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(286, 385);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(100, 38);
            btnClose.TabIndex = 3;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            btnClose.Click += btnClose_Click;
            // 
            // frmShowPersonInfo
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(728, 450);
            Controls.Add(btnClose);
            Controls.Add(lblTitle);
            Controls.Add(ctrlPersonCard1);
            Name = "frmShowPersonInfo";
            Text = "frmShowPersonInfo";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Controls.ctrlPersonCard ctrlPersonCard1;
        private Label lblTitle;
        private Button btnClose;
    }
}