VERSION 5.00
Begin VB.Form Form5 
   Caption         =   "Solucion 8-4"
   ClientHeight    =   4260
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6735
   LinkTopic       =   "Form5"
   ScaleHeight     =   4260
   ScaleWidth      =   6735
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   735
      Left            =   4080
      TabIndex        =   5
      Top             =   3120
      Width           =   1335
   End
   Begin VB.CommandButton Command1 
      Caption         =   "hallar sueldo"
      Height          =   735
      Left            =   2040
      TabIndex        =   4
      Top             =   3120
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   3000
      TabIndex        =   2
      Top             =   1200
      Width           =   2295
   End
   Begin VB.Line Line1 
      X1              =   2400
      X2              =   5520
      Y1              =   2040
      Y2              =   2040
   End
   Begin VB.Label Label3 
      BackColor       =   &H80000009&
      BorderStyle     =   1  'Fixed Single
      Height          =   495
      Left            =   3000
      TabIndex        =   3
      Top             =   2400
      Width           =   2535
   End
   Begin VB.Label Label2 
      Alignment       =   2  'Center
      Caption         =   "Sueldo total"
      Height          =   375
      Left            =   720
      TabIndex        =   1
      Top             =   2400
      Width           =   1695
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      Caption         =   "Sueldo"
      Height          =   255
      Left            =   600
      TabIndex        =   0
      Top             =   1320
      Width           =   1815
   End
End
Attribute VB_Name = "Form5"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim s As Currency
Dim st As Currency

s = Text1.Text

st = s * 0.955

Label3.Caption = st

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Label3.Caption = ""
Text1.SetFocus
End Sub
