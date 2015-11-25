VERSION 5.00
Begin VB.Form Form7 
   Caption         =   "Form7"
   ClientHeight    =   3645
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5070
   LinkTopic       =   "Form7"
   ScaleHeight     =   3645
   ScaleWidth      =   5070
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3840
      TabIndex        =   11
      Top             =   1080
      Width           =   1095
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Ejecutar"
      Height          =   495
      Left            =   3840
      TabIndex        =   10
      Top             =   360
      Width           =   1095
   End
   Begin VB.TextBox Text4 
      Height          =   375
      Left            =   2280
      TabIndex        =   9
      Top             =   2040
      Width           =   1335
   End
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   2280
      TabIndex        =   8
      Top             =   1440
      Width           =   1335
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   2280
      TabIndex        =   7
      Top             =   840
      Width           =   1335
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2280
      TabIndex        =   6
      Top             =   240
      Width           =   1335
   End
   Begin VB.Label Label6 
      Height          =   495
      Left            =   2040
      TabIndex        =   5
      Top             =   2760
      Width           =   1215
   End
   Begin VB.Label Label5 
      Caption         =   "El mayor es"
      Height          =   255
      Left            =   360
      TabIndex        =   4
      Top             =   2760
      Width           =   975
   End
   Begin VB.Label Label4 
      Caption         =   "ingrese el 4to numero"
      Height          =   255
      Left            =   240
      TabIndex        =   3
      Top             =   2040
      Width           =   1815
   End
   Begin VB.Label Label3 
      Caption         =   "ingrese el 3er numero"
      Height          =   255
      Left            =   240
      TabIndex        =   2
      Top             =   1440
      Width           =   1815
   End
   Begin VB.Label Label2 
      Caption         =   "ingrese el 2do numero"
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   840
      Width           =   1815
   End
   Begin VB.Label Label1 
      Caption         =   " ingrese el 1er numero"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   1815
   End
End
Attribute VB_Name = "Form7"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Currency
Dim b As Currency
Dim c As Currency
Dim d As Currency

a = Val(Text1.Text)
b = Val(Text2.Text)
c = Val(Text3.Text)
d = Val(Text4.Text)

If a < b And b < c And c < d Then
Label6.Caption = d
Else
If b < c And c < d And d < a Then
Label6.Caption = a
Else
If c < d And d < a And a < b Then
Label6.Caption = b
Else
If d < a And a < b And b < c Then
Label6.Caption = c
End If
End If
End If
End If
End Sub

Private Sub Command2_Click()

Text1.Text = ""
Text2.Text = ""
Text3.Text = ""
Text4.Text = ""
Label6.Caption = ""
End Sub
