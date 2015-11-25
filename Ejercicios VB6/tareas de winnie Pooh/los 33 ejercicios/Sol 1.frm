VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   1950
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6990
   LinkTopic       =   "Form2"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   1950
   ScaleWidth      =   6990
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   5040
      TabIndex        =   3
      Top             =   1200
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   5040
      TabIndex        =   2
      Top             =   480
      Width           =   1575
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2640
      TabIndex        =   1
      Top             =   600
      Width           =   2055
   End
   Begin VB.Label Label2 
      Height          =   495
      Left            =   2520
      TabIndex        =   4
      Top             =   1200
      Width           =   2175
   End
   Begin VB.Label Label1 
      Caption         =   "Ingrese el numero de 5 digitos"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   600
      Width           =   2175
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Long

a = Val(Text1.Text)

If a >= 10000 And a <= 99999 Then
If a Mod 2 = 0 Then
Label2.Caption = "es 5 digitos par"
Else
Label2.Caption = "no es 5 digitos par"
End If
Else
MsgBox "no es de 5 digitos pe huevon", 16, "No pe huevon"
End If
End Sub

Private Sub Command2_Click()
Text1.Text = ""
Label2.Caption = ""
Text1.SetFocus
End Sub
