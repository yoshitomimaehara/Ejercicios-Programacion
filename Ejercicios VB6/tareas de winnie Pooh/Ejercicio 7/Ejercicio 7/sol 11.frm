VERSION 5.00
Begin VB.Form Form12 
   Caption         =   "Form12"
   ClientHeight    =   4830
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6570
   LinkTopic       =   "Form12"
   ScaleHeight     =   4830
   ScaleWidth      =   6570
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   615
      Left            =   2760
      TabIndex        =   2
      Top             =   840
      Width           =   2295
   End
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   975
      Left            =   5280
      TabIndex        =   0
      Top             =   840
      Width           =   1215
   End
   Begin VB.Line Line1 
      X1              =   2160
      X2              =   5160
      Y1              =   1680
      Y2              =   1680
   End
   Begin VB.Label Label2 
      Height          =   615
      Left            =   2520
      TabIndex        =   3
      Top             =   2040
      Width           =   2655
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese X"
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   840
      Width           =   2055
   End
End
Attribute VB_Name = "Form12"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Currency
Dim y As Currency

x = Val(Text1.Text)

If x <> 2 Then
y = -x + (20 / (x - 2))
Label2.Caption = y
Else
MsgBox "error", 16, "error"
End If

End Sub


