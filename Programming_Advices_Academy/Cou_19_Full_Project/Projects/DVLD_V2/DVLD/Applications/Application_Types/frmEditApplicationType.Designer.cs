namespace DVLD.Applications.Application_Types
{
    partial class frmEditApplicationType
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
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            lblApplicationTypeID = new Label();
            txtTitle = new TextBox();
            txtFees = new TextBox();
            btnClose = new Button();
            btnSave = new Button();
            errorProvider1 = new ErrorProvider(components);
            ((System.ComponentModel.ISupportInitialize)errorProvider1).BeginInit();
            SuspendLayout();
            // 
            // lblTitle
            // 
            lblTitle.Anchor = AnchorStyles.Top;
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(66, 9);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(337, 37);
            lblTitle.TabIndex = 0;
            lblTitle.Text = "Update Application Type";
            lblTitle.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label1
            // 
            label1.Anchor = AnchorStyles.Top;
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.Black;
            label1.Location = new Point(9, 68);
            label1.Name = "label1";
            label1.Size = new Size(37, 25);
            label1.TabIndex = 1;
            label1.Text = "ID:";
            label1.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Top;
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(9, 111);
            label2.Name = "label2";
            label2.Size = new Size(55, 25);
            label2.TabIndex = 2;
            label2.Text = "Title:";
            label2.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // label3
            // 
            label3.Anchor = AnchorStyles.Top;
            label3.AutoSize = true;
            label3.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label3.ForeColor = Color.Black;
            label3.Location = new Point(9, 151);
            label3.Name = "label3";
            label3.Size = new Size(55, 25);
            label3.TabIndex = 3;
            label3.Text = "Fees:";
            label3.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // lblApplicationTypeID
            // 
            lblApplicationTypeID.Anchor = AnchorStyles.Top;
            lblApplicationTypeID.AutoSize = true;
            lblApplicationTypeID.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblApplicationTypeID.ForeColor = Color.Black;
            lblApplicationTypeID.Location = new Point(70, 68);
            lblApplicationTypeID.Name = "lblApplicationTypeID";
            lblApplicationTypeID.Size = new Size(44, 25);
            lblApplicationTypeID.TabIndex = 4;
            lblApplicationTypeID.Text = "????";
            lblApplicationTypeID.TextAlign = ContentAlignment.MiddleCenter;
            // 
            // txtTitle
            // 
            txtTitle.Location = new Point(70, 113);
            txtTitle.Name = "txtTitle";
            txtTitle.Size = new Size(333, 23);
            txtTitle.TabIndex = 5;
            txtTitle.Validating += txtTitle_Validating;
            // 
            // txtFees
            // 
            txtFees.Location = new Point(70, 153);
            txtFees.Name = "txtFees";
            txtFees.Size = new Size(333, 23);
            txtFees.TabIndex = 6;
            txtFees.Validating += txtFees_Validating;
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.Transparent;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(70, 205);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(114, 32);
            btnClose.TabIndex = 7;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            // 
            // btnSave
            // 
            btnSave.BackColor = Color.Transparent;
            btnSave.Font = new Font("Tahoma", 11.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnSave.Location = new Point(289, 205);
            btnSave.Name = "btnSave";
            btnSave.Size = new Size(114, 32);
            btnSave.TabIndex = 28;
            btnSave.Text = "Save";
            btnSave.UseVisualStyleBackColor = false;
            btnSave.Click += btnSave_Click;
            // 
            // errorProvider1
            // 
            errorProvider1.ContainerControl = this;
            // 
            // frmEditApplicationType
            // 
            AcceptButton = btnSave;
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            CancelButton = btnClose;
            ClientSize = new Size(472, 258);
            Controls.Add(btnSave);
            Controls.Add(btnClose);
            Controls.Add(txtFees);
            Controls.Add(txtTitle);
            Controls.Add(lblApplicationTypeID);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Controls.Add(lblTitle);
            MaximizeBox = false;
            MinimizeBox = false;
            Name = "frmEditApplicationType";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Update Application Type";
            Load += frmEditApplicationType_Load;
            ((System.ComponentModel.ISupportInitialize)errorProvider1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label lblTitle;
        private Label label1;
        private Label label2;
        private Label label3;
        private Label lblApplicationTypeID;
        private TextBox txtTitle;
        private TextBox txtFees;
        private Button btnClose;
        private Button btnSave;
        private ErrorProvider errorProvider1;
    }
}