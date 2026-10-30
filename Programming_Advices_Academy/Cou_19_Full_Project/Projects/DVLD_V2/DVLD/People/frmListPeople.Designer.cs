namespace DVLD.People
{
    partial class frmListPeople
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
            pbPersonImage = new PictureBox();
            lblTitle = new Label();
            label1 = new Label();
            cbFilterBy = new ComboBox();
            txtFilterValue = new TextBox();
            btnAddPerson = new Button();
            dgvPeople = new DataGridView();
            label2 = new Label();
            lblRecordsCount = new Label();
            btnClose = new Button();
            ((System.ComponentModel.ISupportInitialize)pbPersonImage).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dgvPeople).BeginInit();
            SuspendLayout();
            // 
            // pbPersonImage
            // 
            pbPersonImage.Image = Properties.Resources.group;
            pbPersonImage.Location = new Point(344, 12);
            pbPersonImage.Name = "pbPersonImage";
            pbPersonImage.Size = new Size(143, 107);
            pbPersonImage.SizeMode = PictureBoxSizeMode.Zoom;
            pbPersonImage.TabIndex = 0;
            pbPersonImage.TabStop = false;
            // 
            // lblTitle
            // 
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(309, 122);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(216, 37);
            lblTitle.TabIndex = 1;
            lblTitle.Text = "Manage People";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label1.ForeColor = Color.Black;
            label1.Location = new Point(12, 185);
            label1.Name = "label1";
            label1.Size = new Size(80, 21);
            label1.TabIndex = 2;
            label1.Text = "Filter By: ";
            // 
            // cbFilterBy
            // 
            cbFilterBy.Font = new Font("Segoe UI", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            cbFilterBy.FormattingEnabled = true;
            cbFilterBy.Location = new Point(98, 181);
            cbFilterBy.Name = "cbFilterBy";
            cbFilterBy.Size = new Size(344, 25);
            cbFilterBy.TabIndex = 3;
            // 
            // txtFilterValue
            // 
            txtFilterValue.Font = new Font("Segoe UI", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            txtFilterValue.Location = new Point(448, 181);
            txtFilterValue.Name = "txtFilterValue";
            txtFilterValue.Size = new Size(334, 25);
            txtFilterValue.TabIndex = 4;
            // 
            // btnAddPerson
            // 
            btnAddPerson.Image = Properties.Resources.AddPerson;
            btnAddPerson.Location = new Point(788, 158);
            btnAddPerson.Name = "btnAddPerson";
            btnAddPerson.Size = new Size(57, 48);
            btnAddPerson.TabIndex = 5;
            btnAddPerson.UseVisualStyleBackColor = true;
            // 
            // dgvPeople
            // 
            dgvPeople.BackgroundColor = Color.White;
            dgvPeople.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgvPeople.Location = new Point(12, 212);
            dgvPeople.Name = "dgvPeople";
            dgvPeople.Size = new Size(833, 233);
            dgvPeople.TabIndex = 6;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(12, 448);
            label2.Name = "label2";
            label2.Size = new Size(78, 21);
            label2.TabIndex = 7;
            label2.Text = "Records: ";
            // 
            // lblRecordsCount
            // 
            lblRecordsCount.AutoSize = true;
            lblRecordsCount.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblRecordsCount.ForeColor = Color.Black;
            lblRecordsCount.Location = new Point(83, 448);
            lblRecordsCount.Name = "lblRecordsCount";
            lblRecordsCount.Size = new Size(24, 21);
            lblRecordsCount.TabIndex = 8;
            lblRecordsCount.Text = "??";
            // 
            // btnClose
            // 
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(745, 451);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(100, 38);
            btnClose.TabIndex = 9;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            // 
            // frmListPeople
            // 
            AcceptButton = btnAddPerson;
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(857, 505);
            Controls.Add(btnClose);
            Controls.Add(lblRecordsCount);
            Controls.Add(label2);
            Controls.Add(dgvPeople);
            Controls.Add(btnAddPerson);
            Controls.Add(txtFilterValue);
            Controls.Add(cbFilterBy);
            Controls.Add(label1);
            Controls.Add(lblTitle);
            Controls.Add(pbPersonImage);
            Name = "frmListPeople";
            Text = "frmListPeople";
            ((System.ComponentModel.ISupportInitialize)pbPersonImage).EndInit();
            ((System.ComponentModel.ISupportInitialize)dgvPeople).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private PictureBox pbPersonImage;
        private Label lblTitle;
        private Label label1;
        private ComboBox cbFilterBy;
        private TextBox txtFilterValue;
        private Button btnAddPerson;
        private DataGridView dgvPeople;
        private Label label2;
        private Label lblRecordsCount;
        private Button btnClose;
    }
}