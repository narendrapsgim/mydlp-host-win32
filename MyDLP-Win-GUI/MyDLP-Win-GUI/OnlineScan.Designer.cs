﻿namespace MydlpWinGui
{
    partial class OnlineScan
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
            this.components = new System.ComponentModel.Container();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabOnlineOptions = new System.Windows.Forms.TabPage();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.checkBoxJustLog = new System.Windows.Forms.CheckBox();
            this.checkBoxEnableScan = new System.Windows.Forms.CheckBox();
            this.tabOnlineScanHistory = new System.Windows.Forms.TabPage();
            this.label2 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.timer1 = new System.Windows.Forms.Timer(this.components);
            this.tabControl1.SuspendLayout();
            this.tabOnlineOptions.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.tabOnlineScanHistory.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabOnlineOptions);
            this.tabControl1.Controls.Add(this.tabOnlineScanHistory);
            this.tabControl1.Location = new System.Drawing.Point(3, 3);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(540, 418);
            this.tabControl1.TabIndex = 0;
            // 
            // tabOnlineOptions
            // 
            this.tabOnlineOptions.Controls.Add(this.label1);
            this.tabOnlineOptions.Controls.Add(this.button1);
            this.tabOnlineOptions.Controls.Add(this.groupBox1);
            this.tabOnlineOptions.Location = new System.Drawing.Point(4, 22);
            this.tabOnlineOptions.Name = "tabOnlineOptions";
            this.tabOnlineOptions.Padding = new System.Windows.Forms.Padding(3);
            this.tabOnlineOptions.Size = new System.Drawing.Size(532, 392);
            this.tabOnlineOptions.TabIndex = 0;
            this.tabOnlineOptions.Text = "Online Scan Options";
            this.tabOnlineOptions.UseVisualStyleBackColor = true;
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(15, 18);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(491, 39);
            this.label1.TabIndex = 2;
            this.label1.Text = "label1";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(18, 363);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(163, 23);
            this.button1.TabIndex = 1;
            this.button1.Text = "Save Changes";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.checkBoxJustLog);
            this.groupBox1.Controls.Add(this.checkBoxEnableScan);
            this.groupBox1.Location = new System.Drawing.Point(18, 77);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(488, 81);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Online Scan Options";
            // 
            // checkBoxJustLog
            // 
            this.checkBoxJustLog.AutoSize = true;
            this.checkBoxJustLog.Location = new System.Drawing.Point(50, 48);
            this.checkBoxJustLog.Name = "checkBoxJustLog";
            this.checkBoxJustLog.Size = new System.Drawing.Size(133, 17);
            this.checkBoxJustLog.TabIndex = 1;
            this.checkBoxJustLog.Text = "Do not prevent just log";
            this.checkBoxJustLog.UseVisualStyleBackColor = true;
            // 
            // checkBoxEnableScan
            // 
            this.checkBoxEnableScan.AutoSize = true;
            this.checkBoxEnableScan.Location = new System.Drawing.Point(11, 24);
            this.checkBoxEnableScan.Name = "checkBoxEnableScan";
            this.checkBoxEnableScan.Size = new System.Drawing.Size(201, 17);
            this.checkBoxEnableScan.TabIndex = 0;
            this.checkBoxEnableScan.Text = "Enable Scan on Removable Devices";
            this.checkBoxEnableScan.UseVisualStyleBackColor = true;
            // 
            // tabOnlineScanHistory
            // 
            this.tabOnlineScanHistory.Controls.Add(this.label2);
            this.tabOnlineScanHistory.Controls.Add(this.textBox1);
            this.tabOnlineScanHistory.Location = new System.Drawing.Point(4, 22);
            this.tabOnlineScanHistory.Name = "tabOnlineScanHistory";
            this.tabOnlineScanHistory.Padding = new System.Windows.Forms.Padding(3);
            this.tabOnlineScanHistory.Size = new System.Drawing.Size(532, 392);
            this.tabOnlineScanHistory.TabIndex = 1;
            this.tabOnlineScanHistory.Text = "Online Scan History";
            this.tabOnlineScanHistory.UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(19, 17);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(35, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "label2";
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(22, 43);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.ReadOnly = true;
            this.textBox1.Size = new System.Drawing.Size(491, 331);
            this.textBox1.TabIndex = 0;
            // 
            // OnlineScan
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.Controls.Add(this.tabControl1);
            this.Name = "OnlineScan";
            this.Size = new System.Drawing.Size(546, 424);
            this.Load += new System.EventHandler(this.OnlineScan_Load);
            this.tabControl1.ResumeLayout(false);
            this.tabOnlineOptions.ResumeLayout(false);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.tabOnlineScanHistory.ResumeLayout(false);
            this.tabOnlineScanHistory.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabOnlineOptions;
        private System.Windows.Forms.TabPage tabOnlineScanHistory;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.CheckBox checkBoxEnableScan;
        private System.Windows.Forms.CheckBox checkBoxJustLog;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Timer timer1;
    }
}
