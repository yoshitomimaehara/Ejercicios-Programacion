VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   2550
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   6390
   LinkTopic       =   "Form2"
   ScaleHeight     =   2550
   ScaleWidth      =   6390
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command2 
      Caption         =   "Limpiar"
      Height          =   495
      Left            =   3240
      TabIndex        =   6
      Top             =   1800
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Resolver"
      Height          =   495
      Left            =   1440
      TabIndex        =   3
      Top             =   1800
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   72
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   2760
      TabIndex        =   1
      Top             =   360
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   72
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   480
      TabIndex        =   0
      Top             =   360
      Width           =   1215
   End
   Begin VB.Label Label3 
      BackColor       =   &H00FFFFFF&
      BorderStyle     =   1  'Fixed Single
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   36
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   1095
      Left            =   5040
      TabIndex        =   5
      Top             =   360
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   " ="
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   36
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   4080
      TabIndex        =   4
      Top             =   480
      Width           =   855
   End
   Begin VB.Label Label1 
      Caption         =   " +"
      BeginProperty Font 
         Name            =   "MS Sans Serif"
         Size            =   36
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   1800
      TabIndex        =   2
      Top             =   480
      Width           =   855
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Dim a As Byte
Dim b As Byte
Dim s As Byte

Text1.Text = a
Text2.Text = b
s = a + b

s = Label1.Caption

End Sub
