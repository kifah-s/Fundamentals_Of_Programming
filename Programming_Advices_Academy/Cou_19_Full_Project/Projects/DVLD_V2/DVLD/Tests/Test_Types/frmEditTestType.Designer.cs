namespace DVLD.Tests.Test_Types
{
    partial class frmEditTestType
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
            btnSave = new Button();
            btnClose = new Button();
            txtFees = new TextBox();
            txtTitle = new TextBox();
            lblTestTypeID = new Label();
            label3 = new Label();
            label2 = new Label();
            label1 = new Label();
            lblTitle = new Label();
            txtDescription = new TextBox();
            label4 = new Label();
            errorProvider1 = new ErrorProvider(components);
            ((System.ComponentModel.ISupportInitialize)errorProvider1).BeginInit();
            SuspendLayout();
            // 
            // btnSave
            // 
            btnSave.BackColor = Color.Transparent;
            btnSave.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnSave.Location = new Point(288, 295);
            btnSave.Name = "btnSave";
            btnSave.Size = new Size(114, 32);
            btnSave.TabIndex = 37;
            btnSave.Text = "Save";
            btnSave.UseVisualStyleBackColor = false;
            btnSave.Click += btnSave_Click;
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.Transparent;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(69, 295);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(114, 32);
            btnClose.TabIndex = 36;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            btnClose.Click += btnClose_Click;
            // 
            // txtFees
            // 
            txtFees.Location = new Point(69, 258);
            txtFees.Name = "txtFees";
            txtFees.Size = new Size(333, 23);
            txtFees.TabIndex = 35;
            txtFees.Validating += txtFees_Validating;
            // 
            // txtTitle
            // 
            txtTitle.Location = new Point(69, 115);
            txtTitle.Name = "txtTitle";
            txtTitle.Size = new Size(333, 23);
            txtTitle.TabIndex = 34;
            txtTitle.Validating += txtTitle_Validating;
            // 
            // lblTestTypeID
            // 
            lblTestTypeID.Anchor = AnchorStyles.Top;
            lblTestTypeID.AutoSize = true;
            lblTestTypeID.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTestTypeID.ForeColor = Color.Black;
            lblTestTypeID.Location = new Point(69, 75);
            lblTestTypeID.Name = "lblTestTypeID";
            lblTestTypeID.Size = new Size(44, 25);
            lblTestTypeID.TabIndex = 33;
            lblTestTypeID.Text = "????";
            lblTestTypeID.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label3
            // 
            label3.Anchor = AnchorStyles.Top;
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.ForeColor = Color.Black;
            label3.Location = new Point(8, 256);
            label3.Name = "label3";
            label3.Size = new Size(55, 25);
            label3.TabIndex = 32;
            label3.Text = "Fees:";
            label3.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Top;
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(6, 113);
            label2.Name = "label2";
            label2.Size = new Size(55, 25);
            label2.TabIndex = 31;
            label2.Text = "Title:";
            label2.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label1
            // 
            label1.Anchor = AnchorStyles.Top;
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.Black;
            label1.Location = new Point(8, 75);
            label1.Name = "label1";
            label1.Size = new Size(37, 25);
            label1.TabIndex = 30;
            label1.Text = "ID:";
            label1.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // lblTitle
            // 
            lblTitle.Anchor = AnchorStyles.Top;
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(63, 9);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(337, 37);
            lblTitle.TabIndex = 29;
            lblTitle.Text = "Update Application Type";
            lblTitle.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // txtDescription
            // 
            txtDescription.Location = new Point(69, 153);
            txtDescription.Multiline = true;
            txtDescription.Name = "txtDescription";
            txtDescription.Size = new Size(333, 93);
            txtDescription.TabIndex = 38;
            txtDescription.Validating += txtDescription_Validating;
            // 
            // label4
            // 
            label4.Anchor = AnchorStyles.Top;
            label4.AutoSize = true;
            label4.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label4.ForeColor = Color.Black;
            label4.Location = new Point(8, 153);
            label4.Name = "label4";
            label4.Size = new Size(49, 25);
            label4.TabIndex = 39;
            label4.Text = "Des:";
            label4.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // errorProvider1
            // 
            errorProvider1.ContainerControl = this;
            // 
            // frmEditTestType
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            ClientSize = new Size(459, 339);
            Controls.Add(label4);
            Controls.Add(txtDescription);
            Controls.Add(btnSave);
            Controls.Add(btnClose);
            Controls.Add(txtFees);
            Controls.Add(txtTitle);
            Controls.Add(lblTestTypeID);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(lblTitle);
            MaximizeBox = false;
            MinimizeBox = false;
            Name = "frmEditTestType";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Edit Test Type";
            Load += frmEditTestType_Load;
            ((System.ComponentModel.ISupportInitialize)errorProvider1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnSave;
        private Button btnClose;
        private TextBox txtFees;
        private TextBox txtTitle;
        private Label lblTestTypeID;
        private Label label3;
        private Label label2;
        private Label label1;
        private Label lblTitle;
        private TextBox txtDescription;
        private Label label4;
        private ErrorProvider errorProvider1;
    }
}