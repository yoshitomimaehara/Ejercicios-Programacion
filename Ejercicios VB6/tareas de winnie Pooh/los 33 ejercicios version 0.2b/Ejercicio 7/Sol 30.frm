VERSION 5.00
Begin VB.Form Form31 
   Caption         =   "Form31"
   ClientHeight    =   4845
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6165
   LinkTopic       =   "Form31"
   ScaleHeight     =   4845
   ScaleWidth      =   6165
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   615
      Left            =   1920
      TabIndex        =   0
      Top             =   240
      Width           =   2415
   End
   Begin VB.Label Label1 
      Height          =   3375
      Left            =   720
      TabIndex        =   1
      Top             =   1080
      Width           =   5055
   End
End
Attribute VB_Name = "Form31"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer

For a = 17 To 97
If a Mod 2 = 1 Then
Label1.Caption = Label1.Caption + "" + Str(a)
End If
Next a
End Sub
