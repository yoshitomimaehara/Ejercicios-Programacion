VERSION 5.00
Begin VB.Form Form26 
   Caption         =   "Form26"
   ClientHeight    =   3090
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   4170
   LinkTopic       =   "Form26"
   ScaleHeight     =   3090
   ScaleWidth      =   4170
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   975
      Left            =   2760
      TabIndex        =   3
      Top             =   240
      Width           =   1095
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   360
      TabIndex        =   1
      Top             =   840
      Width           =   2055
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   360
      TabIndex        =   0
      Top             =   240
      Width           =   2055
   End
   Begin VB.Label Label1 
      Height          =   975
      Left            =   360
      TabIndex        =   2
      Top             =   1680
      Width           =   2295
   End
End
Attribute VB_Name = "Form26"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim x As Integer

a = Val(Text1.Text)
b = Val(Text2.Text)


 For x = a To b
    Label1.Caption = Label1.Caption + " " + Str(x)
    Next x

End Sub

