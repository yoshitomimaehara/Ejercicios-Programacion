VERSION 5.00
Begin VB.Form Form6 
   Caption         =   "Form6"
   ClientHeight    =   3195
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5580
   LinkTopic       =   "Form6"
   ScaleHeight     =   3195
   ScaleWidth      =   5580
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3840
      TabIndex        =   8
      Top             =   1080
      Width           =   1575
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   495
      Left            =   3840
      TabIndex        =   7
      Top             =   360
      Width           =   1575
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   1680
      TabIndex        =   2
      Top             =   960
      Width           =   1695
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1680
      TabIndex        =   0
      Top             =   360
      Width           =   1695
   End
   Begin VB.Label Label5 
      Height          =   975
      Left            =   3000
      TabIndex        =   6
      Top             =   1920
      Width           =   1095
   End
   Begin VB.Label Label4 
      Height          =   975
      Left            =   1800
      TabIndex        =   5
      Top             =   1920
      Width           =   1095
   End
   Begin VB.Label Label3 
      Height          =   975
      Left            =   600
      TabIndex        =   4
      Top             =   1920
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Ingrese un nombre"
      Height          =   255
      Left            =   120
      TabIndex        =   3
      Top             =   960
      Width           =   1455
   End
   Begin VB.Label Label1 
      Caption         =   "Ingrese el numero "
      Height          =   255
      Left            =   120
      TabIndex        =   1
      Top             =   360
      Width           =   1455
   End
End
Attribute VB_Name = "Form6"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim nom As String

a = Val(Text1.Text)
nom = Text2.Text
If a Mod 2 = 0 Then

Label3.Caption = nom
Label4.Caption = nom

Else

Label3.Caption = a
Label4.Caption = a
Label5.Caption = a

End If

End Sub
Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Label2.Caption = ""
Label3.Caption = ""
Label4.Caption = ""
Text1.SetFocus
End Sub
