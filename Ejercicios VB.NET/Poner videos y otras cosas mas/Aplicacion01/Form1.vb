Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        OpenFileDialog1.FileName = ""
        OpenFileDialog1.ShowDialog()
        AxWindowsMediaPlayer1.URL = OpenFileDialog1.FileName
        Label1.Text = AxWindowsMediaPlayer1.currentMedia.name
    End Sub
End Class
