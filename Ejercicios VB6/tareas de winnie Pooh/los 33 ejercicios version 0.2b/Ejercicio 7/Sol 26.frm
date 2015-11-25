VERSION 5.00
Begin VB.Form Form27 
   Caption         =   "Form27"
   ClientHeight    =   5805
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   7185
   LinkTopic       =   "Form27"
   ScaleHeight     =   5805
   ScaleWidth      =   7185
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "calcular"
      Height          =   975
      Left            =   1080
      TabIndex        =   4
      Top             =   3240
      Width           =   1815
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   3360
      TabIndex        =   3
      Top             =   2040
      Width           =   2775
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   3360
      TabIndex        =   2
      Top             =   720
      Width           =   2775
   End
   Begin VB.Label Label3 
      Height          =   1335
      Left            =   3240
      TabIndex        =   5
      Top             =   3000
      Width           =   3135
   End
   Begin VB.Label Label2 
      Caption         =   "otro #"
      Height          =   855
      Left            =   360
      TabIndex        =   1
      Top             =   1920
      Width           =   2175
   End
   Begin VB.Label Label1 
      Caption         =   "se un numero"
      Height          =   975
      Left            =   480
      TabIndex        =   0
      Top             =   480
      Width           =   2055
   End
End
Attribute VB_Name = "Form27"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Integer
Dim b As Integer
Dim s As Integer

a = Val(Text1.Text)
b = Val(Text1.Text)
s = a + b
For x = 1 To s
Label3.Caption = Label3.Caption + " " + Str(x)
Next x




End Sub

