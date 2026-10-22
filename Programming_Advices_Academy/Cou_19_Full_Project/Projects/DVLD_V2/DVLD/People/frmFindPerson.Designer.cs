namespace DVLD.People
{
    partial class frmFindPerson
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
            ctrlPersonCardWithFilter1 = new DVLD.People.Controls.ctrlPersonCardWithFilter();
            lblTitle = new Label();
            btnClose = new Button();
            SuspendLayout();
            // 
            // ctrlPersonCardWithFilter1
            // 
            ctrlPersonCardWithFilter1.FilterEnabled = true;
            ctrlPersonCardWithFilter1.Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ctrlPersonCardWithFilter1.Location = new Point(12, 60);
            ctrlPersonCardWithFilter1.Name = "ctrlPersonCardWithFilter1";
            ctrlPersonCardWithFilter1.ShowAddPerson = true;
            ctrlPersonCardWithFilter1.Size = new Size(730, 406);
            ctrlPersonCardWithFilter1.TabIndex = 0;
            // 
            // lblTitle
            // 
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 21.75F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(261, 17);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(178, 40);
            lblTitle.TabIndex = 1;
            lblTitle.Text = "Find Person";
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(297, 447);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(100, 38);
            btnClose.TabIndex = 2;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            btnClose.Click += btnClose_Click;
            // 
            // frmFindPerson
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = SystemColors.Control;
            ClientSize = new Size(739, 513);
            Controls.Add(btnClose);
            Controls.Add(lblTitle);
            Controls.Add(ctrlPersonCardWithFilter1);
            Font = new Font("Segoe UI", 9F, FontStyle.Regular, GraphicsUnit.Point, 0);
            ForeColor = SystemColors.ControlText;
            Margin = new Padding(4, 3, 4, 3);
            Name = "frmFindPerson";
            Text = "frmFindPerson";
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Controls.ctrlPersonCardWithFilter ctrlPersonCardWithFilter1;
        private Label lblTitle;
        private Button btnClose;
    }
}