namespace DVLD.Tests.Test_Types
{
    partial class frmListTestTypes
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
            btnClose = new Button();
            lblRecordsCount = new Label();
            label2 = new Label();
            dgvTestTypes = new DataGridView();
            cmsTestTypes = new ContextMenuStrip(components);
            editTestTypeToolStripMenuItem = new ToolStripMenuItem();
            lblTitle = new Label();
            pbTestTypesImage = new PictureBox();
            ((System.ComponentModel.ISupportInitialize)dgvTestTypes).BeginInit();
            cmsTestTypes.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)pbTestTypesImage).BeginInit();
            SuspendLayout();
            // 
            // btnClose
            // 
            btnClose.Anchor = AnchorStyles.Bottom | AnchorStyles.Right;
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(688, 436);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(100, 38);
            btnClose.TabIndex = 18;
            btnClose.Text = "Close";
            btnClose.UseVisualStyleBackColor = false;
            btnClose.Click += btnClose_Click;
            // 
            // lblRecordsCount
            // 
            lblRecordsCount.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            lblRecordsCount.AutoSize = true;
            lblRecordsCount.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblRecordsCount.ForeColor = Color.Black;
            lblRecordsCount.Location = new Point(86, 435);
            lblRecordsCount.Name = "lblRecordsCount";
            lblRecordsCount.Size = new Size(24, 21);
            lblRecordsCount.TabIndex = 17;
            lblRecordsCount.Text = "??";
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(12, 435);
            label2.Name = "label2";
            label2.Size = new Size(78, 21);
            label2.TabIndex = 16;
            label2.Text = "Records: ";
            // 
            // dgvTestTypes
            // 
            dgvTestTypes.AllowUserToAddRows = false;
            dgvTestTypes.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgvTestTypes.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dgvTestTypes.BackgroundColor = Color.White;
            dgvTestTypes.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgvTestTypes.ContextMenuStrip = cmsTestTypes;
            dgvTestTypes.Location = new Point(12, 207);
            dgvTestTypes.Name = "dgvTestTypes";
            dgvTestTypes.Size = new Size(776, 222);
            dgvTestTypes.TabIndex = 15;
            // 
            // cmsTestTypes
            // 
            cmsTestTypes.Items.AddRange(new ToolStripItem[] { editTestTypeToolStripMenuItem });
            cmsTestTypes.Name = "cmsApplicationTypes";
            cmsTestTypes.Size = new Size(198, 48);
            // 
            // editTestTypeToolStripMenuItem
            // 
            editTestTypeToolStripMenuItem.Font = new Font("Segoe UI", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            editTestTypeToolStripMenuItem.Image = Properties.Resources.edit_2;
            editTestTypeToolStripMenuItem.Name = "editTestTypeToolStripMenuItem";
            editTestTypeToolStripMenuItem.Size = new Size(197, 22);
            editTestTypeToolStripMenuItem.Text = "Edit Application Type";
            editTestTypeToolStripMenuItem.Click += editTestTypeToolStripMenuItem_Click;
            // 
            // lblTitle
            // 
            lblTitle.Anchor = AnchorStyles.Top;
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(264, 156);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(261, 37);
            lblTitle.TabIndex = 14;
            lblTitle.Text = "Manage Test Types";
            // 
            // pbTestTypesImage
            // 
            pbTestTypesImage.Anchor = AnchorStyles.Top;
            pbTestTypesImage.Image = Properties.Resources.project_management;
            pbTestTypesImage.Location = new Point(299, 2);
            pbTestTypesImage.Name = "pbTestTypesImage";
            pbTestTypesImage.Size = new Size(191, 152);
            pbTestTypesImage.SizeMode = PictureBoxSizeMode.Zoom;
            pbTestTypesImage.TabIndex = 13;
            pbTestTypesImage.TabStop = false;
            // 
            // frmListTestTypes
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            ClientSize = new Size(800, 485);
            Controls.Add(btnClose);
            Controls.Add(lblRecordsCount);
            Controls.Add(label2);
            Controls.Add(dgvTestTypes);
            Controls.Add(lblTitle);
            Controls.Add(pbTestTypesImage);
            Name = "frmListTestTypes";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "List Test Types";
            Load += frmListTestTypes_Load;
            ((System.ComponentModel.ISupportInitialize)dgvTestTypes).EndInit();
            cmsTestTypes.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)pbTestTypesImage).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button btnClose;
        private Label lblRecordsCount;
        private Label label2;
        private DataGridView dgvTestTypes;
        private Label lblTitle;
        private PictureBox pbTestTypesImage;
        private ContextMenuStrip cmsTestTypes;
        private ToolStripMenuItem editTestTypeToolStripMenuItem;
    }
}