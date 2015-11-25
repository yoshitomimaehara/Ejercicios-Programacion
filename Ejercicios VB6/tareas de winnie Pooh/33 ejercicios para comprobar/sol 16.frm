VERSION 5.00
Begin VB.Form Form17 
   Caption         =   "Form17"
   ClientHeight    =   2070
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5460
   LinkTopic       =   "Form17"
   ScaleHeight     =   2070
   ScaleWidth      =   5460
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   735
      Left            =   4200
      TabIndex        =   3
      Top             =   480
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   1440
      TabIndex        =   0
      Top             =   480
      Width           =   1935
   End
   Begin VB.Line Line1 
      X1              =   1200
      X2              =   3840
      Y1              =   1200
      Y2              =   1200
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1440
      TabIndex        =   2
      Top             =   1320
      Width           =   2055
   End
   Begin VB.Label Label1 
      Caption         =   "Ingresa X"
      Height          =   495
      Left            =   240
      TabIndex        =   1
      Top             =   480
      Width           =   975
   End
End
Attribute VB_Name = "Form17"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim x As Currency
Dim y As Currency

x = Val(Text1.Text)

If a < 15 Then
y = x - 30 + ((x - 15) ^ (1 / 2) / (x - 10))
Label2.Caption = y
End If
End Sub
