VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Solucion 8-1"
   ClientHeight    =   3120
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   6330
   LinkTopic       =   "Form1"
   ScaleHeight     =   3120
   ScaleWidth      =   6330
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   4200
      TabIndex        =   7
      Top             =   1680
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Hallar el area"
      Height          =   495
      Left            =   4200
      TabIndex        =   6
      Top             =   840
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   1800
      TabIndex        =   1
      Top             =   1440
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   1800
      TabIndex        =   0
      Top             =   720
      Width           =   1455
   End
   Begin VB.Label Label5 
      BackStyle       =   0  'Transparent
      Caption         =   "Area del rectangulo"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   18
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1680
      TabIndex        =   8
      Top             =   120
      Width           =   3135
   End
   Begin VB.Line Line1 
      X1              =   1680
      X2              =   3480
      Y1              =   2040
      Y2              =   2040
   End
   Begin VB.Label Label4 
      Caption         =   "Area"
      Height          =   375
      Left            =   240
      TabIndex        =   5
      Top             =   2160
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "Ingrese la altura"
      Height          =   375
      Left            =   240
      TabIndex        =   4
      Top             =   1440
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "ingrese la base"
      Height          =   375
      Left            =   240
      TabIndex        =   3
      Top             =   720
      Width           =   1215
   End
   Begin VB.Label Label1 
      BackColor       =   &H00FFFFFF&
      BorderStyle     =   1  'Fixed Single
      Height          =   375
      Left            =   1800
      TabIndex        =   2
      Top             =   2160
      Width           =   1455
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim area As Integer

a = Val(Text1.Text)
b = Val(Text2.Text)

area = a * b

Label1.Caption = area

End Sub

Private Sub Command2_Click()
Text1.Text = ""
Text2.Text = ""
Label1.Caption = ""
Text1.SetFocus
End Sub
