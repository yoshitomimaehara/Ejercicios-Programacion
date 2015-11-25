VERSION 5.00
Begin VB.Form Form6 
   Caption         =   "Form6"
   ClientHeight    =   3660
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6900
   LinkTopic       =   "Form6"
   ScaleHeight     =   3660
   ScaleWidth      =   6900
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "ejecutar"
      Height          =   1215
      Left            =   5280
      TabIndex        =   5
      Top             =   960
      Width           =   1455
   End
   Begin VB.TextBox Text2 
      Height          =   405
      Left            =   2640
      TabIndex        =   3
      Top             =   1560
      Width           =   2175
   End
   Begin VB.TextBox Text1 
      BackColor       =   &H80000004&
      Height          =   375
      Left            =   2640
      TabIndex        =   1
      Top             =   840
      Width           =   2175
   End
   Begin VB.Label Label5 
      Height          =   735
      Left            =   3960
      TabIndex        =   7
      Top             =   2520
      Width           =   735
   End
   Begin VB.Label Label4 
      Height          =   735
      Left            =   2400
      TabIndex        =   6
      Top             =   2520
      Width           =   735
   End
   Begin VB.Label Label3 
      Height          =   735
      Left            =   840
      TabIndex        =   4
      Top             =   2520
      Width           =   735
   End
   Begin VB.Label Label2 
      Caption         =   "ingrese un nombre"
      Height          =   255
      Left            =   600
      TabIndex        =   2
      Top             =   1560
      Width           =   1455
   End
   Begin VB.Label Label1 
      Caption         =   "ingrese un numero"
      Height          =   255
      Left            =   480
      TabIndex        =   0
      Top             =   840
      Width           =   1455
   End
End
Attribute VB_Name = "Form6"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Currency
Dim n As String


a = Text1.Text
n = Text2.Text

If a Mod 2 = 0 Then
Label3.Caption = n
Label4.Caption = n

Else
    
Label3.Caption = a
Label4.Caption = a
Label5.Caption = a
End If
End Sub


