namespace DVLD.Applications.Application_Types
{
    partial class frmListApplicationTypes
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
            pbApplicationTypesmage = new PictureBox();
            lblTitle = new Label();
            dgvApplicationTypes = new DataGridView();
            cmsApplicationTypes = new ContextMenuStrip(components);
            editApplicationTypeToolStripMenuItem = new ToolStripMenuItem();
            btnClose = new Button();
            lblRecordsCount = new Label();
            label2 = new Label();
            ((System.ComponentModel.ISupportInitialize)pbApplicationTypesmage).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dgvApplicationTypes).BeginInit();
            cmsApplicationTypes.SuspendLayout();
            SuspendLayout();
            // 
            // pbApplicationTypesmage
            // 
            pbApplicationTypesmage.Anchor = AnchorStyles.Top;
            pbApplicationTypesmage.Image = Properties.Resources.project_management;
            pbApplicationTypesmage.Location = new Point(299, 12);
            pbApplicationTypesmage.Name = "pbApplicationTypesmage";
            pbApplicationTypesmage.Size = new Size(191, 152);
            pbApplicationTypesmage.SizeMode = PictureBoxSizeMode.Zoom;
            pbApplicationTypesmage.TabIndex = 0;
            pbApplicationTypesmage.TabStop = false;
            // 
            // lblTitle
            // 
            lblTitle.Anchor = AnchorStyles.Top;
            lblTitle.AutoSize = true;
            lblTitle.Font = new Font("Segoe UI", 20.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            lblTitle.ForeColor = Color.Red;
            lblTitle.Location = new Point(220, 172);
            lblTitle.Name = "lblTitle";
            lblTitle.Size = new Size(358, 37);
            lblTitle.TabIndex = 2;
            lblTitle.Text = "Manage Application Types";
            // 
            // dgvApplicationTypes
            // 
            dgvApplicationTypes.AllowUserToAddRows = false;
            dgvApplicationTypes.Anchor = AnchorStyles.Top | AnchorStyles.Bottom | AnchorStyles.Left | AnchorStyles.Right;
            dgvApplicationTypes.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            dgvApplicationTypes.BackgroundColor = Color.White;
            dgvApplicationTypes.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dgvApplicationTypes.ContextMenuStrip = cmsApplicationTypes;
            dgvApplicationTypes.Location = new Point(12, 223);
            dgvApplicationTypes.Name = "dgvApplicationTypes";
            dgvApplicationTypes.Size = new Size(776, 198);
            dgvApplicationTypes.TabIndex = 7;
            // 
            // cmsApplicationTypes
            // 
            cmsApplicationTypes.Items.AddRange(new ToolStripItem[] { editApplicationTypeToolStripMenuItem });
            cmsApplicationTypes.Name = "cmsApplicationTypes";
            cmsApplicationTypes.Size = new Size(198, 26);
            // 
            // editApplicationTypeToolStripMenuItem
            // 
            editApplicationTypeToolStripMenuItem.Font = new Font("Segoe UI", 9.75F, FontStyle.Regular, GraphicsUnit.Point, 0);
            editApplicationTypeToolStripMenuItem.Image = Properties.Resources.edit_2;
            editApplicationTypeToolStripMenuItem.Name = "editApplicationTypeToolStripMenuItem";
            editApplicationTypeToolStripMenuItem.Size = new Size(197, 22);
            editApplicationTypeToolStripMenuItem.Text = "Edit Application Type";
            editApplicationTypeToolStripMenuItem.Click += editApplicationTypeToolStripMenuItem_Click;
            // 
            // btnClose
            // 
            btnClose.Anchor = AnchorStyles.Bottom | AnchorStyles.Right;
            btnClose.BackColor = Color.White;
            btnClose.FlatStyle = FlatStyle.Flat;
            btnClose.Font = new Font("Segoe UI", 14.25F, FontStyle.Bold, GraphicsUnit.Point, 0);
            btnClose.ForeColor = Color.Red;
            btnClose.Location = new Point(688, 432);
            btnClose.Name = "btnClose";
            btnClose.Size = new Size(100, 38);
            btnClose.TabIndex = 12;
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
            lblRecordsCount.Location = new Point(86, 432);
            lblRecordsCount.Name = "lblRecordsCount";
            lblRecordsCount.Size = new Size(24, 21);
            lblRecordsCount.TabIndex = 11;
            lblRecordsCount.Text = "??";
            // 
            // label2
            // 
            label2.Anchor = AnchorStyles.Bottom | AnchorStyles.Left;
            label2.AutoSize = true;
            label2.Font = new Font("Segoe UI", 12F, FontStyle.Bold, GraphicsUnit.Point, 0);
            label2.ForeColor = Color.Black;
            label2.Location = new Point(12, 432);
            label2.Name = "label2";
            label2.Size = new Size(78, 21);
            label2.TabIndex = 10;
            label2.Text = "Records: ";
            // 
            // frmListApplicationTypes
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.White;
            CancelButton = btnClose;
            ClientSize = new Size(800, 486);
            Controls.Add(btnClose);
            Controls.Add(lblRecordsCount);
            Controls.Add(label2);
            Controls.Add(dgvApplicationTypes);
            Controls.Add(lblTitle);
            Controls.Add(pbApplicationTypesmage);
            Name = "frmListApplicationTypes";
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Manage Application Types";
            Load += frmListApplicationTypes_Load;
            ((System.ComponentModel.ISupportInitialize)pbApplicationTypesmage).EndInit();
            ((System.ComponentModel.ISupportInitialize)dgvApplicationTypes).EndInit();
            cmsApplicationTypes.ResumeLayout(false);
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private PictureBox pbApplicationTypesmage;
        private Label lblTitle;
        private DataGridView dgvApplicationTypes;
        private Button btnClose;
        private Label lblRecordsCount;
        private Label label2;
        private ContextMenuStrip cmsApplicationTypes;
        private ToolStripMenuItem editApplicationTypeToolStripMenuItem;
    }
}