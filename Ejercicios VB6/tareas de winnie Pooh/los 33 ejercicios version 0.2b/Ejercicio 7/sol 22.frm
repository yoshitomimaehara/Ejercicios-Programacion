VERSION 5.00
Begin VB.Form Form23 
   Caption         =   "Form23"
   ClientHeight    =   3765
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5790
   LinkTopic       =   "Form23"
   ScaleHeight     =   3765
   ScaleWidth      =   5790
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "calcular"
      Height          =   735
      Left            =   4680
      TabIndex        =   3
      Top             =   360
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2160
      TabIndex        =   1
      Top             =   720
      Width           =   2295
   End
   Begin VB.Label Label2 
      Height          =   1815
      Left            =   1440
      TabIndex        =   2
      Top             =   1560
      Width           =   3375
   End
   Begin VB.Label Label1 
      Caption         =   "ingresar un numero"
      Height          =   255
      Left            =   360
      TabIndex        =   0
      Top             =   840
      Width           =   1455
   End
End
Attribute VB_Name = "Form23"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim n As Byte
Dim x As Byte

n = Val(Text1.Text)
Label2.Caption = ""
For x = 1 To n
    Label2.Caption = Label2.Caption + " " + Str(x)
Next x


End Sub
