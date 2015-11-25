VERSION 5.00
Begin VB.Form Form10 
   Caption         =   "Form10"
   ClientHeight    =   1590
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6135
   LinkTopic       =   "Form10"
   ScaleHeight     =   1590
   ScaleWidth      =   6135
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2040
      TabIndex        =   2
      Top             =   240
      Width           =   2055
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   4440
      TabIndex        =   1
      Top             =   120
      Width           =   1575
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   4440
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Ingrese el numero "
      Height          =   255
      Left            =   120
      TabIndex        =   4
      Top             =   240
      Width           =   1575
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   1920
      TabIndex        =   3
      Top             =   840
      Width           =   2175
   End
End
Attribute VB_Name = "Form10"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Currency

a = Val(Text1.Text)

If a > 100 And a Mod 2 = 1 Then
Label2.Caption = "es numero mayor q 100 impar"
Else
Label2.Caption = " no es numero mayor q 100 impar"
End If
End Sub
