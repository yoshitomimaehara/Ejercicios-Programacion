VERSION 5.00
Begin VB.Form Form1 
   BackColor       =   &H00C0C000&
   Caption         =   "Menu"
   ClientHeight    =   5010
   ClientLeft      =   60
   ClientTop       =   450
   ClientWidth     =   5940
   Icon            =   "Menu.frx":0000
   LinkTopic       =   "Form5"
   MaxButton       =   0   'False
   ScaleHeight     =   5010
   ScaleWidth      =   5940
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command5 
      Caption         =   "Salir"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   855
      Left            =   2160
      Picture         =   "Menu.frx":0442
      Style           =   1  'Graphical
      TabIndex        =   5
      Top             =   3960
      Width           =   1215
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Dividir"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3360
      TabIndex        =   4
      Top             =   2760
      Width           =   1815
   End
   Begin VB.CommandButton Command3 
      Caption         =   "Multiplicar"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   600
      TabIndex        =   3
      Top             =   2760
      Width           =   1695
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Restar"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   3360
      TabIndex        =   2
      Top             =   1440
      Width           =   1815
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Sumar"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   600
      TabIndex        =   1
      Top             =   1440
      Width           =   1695
   End
   Begin VB.Label Label1 
      Alignment       =   2  'Center
      BackStyle       =   0  'Transparent
      Caption         =   "LAS 4 OPERACIONES"
      BeginProperty Font 
         Name            =   "Comic Sans MS"
         Size            =   15.75
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      Height          =   495
      Left            =   1320
      TabIndex        =   0
      Top             =   240
      Width           =   3375
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Form2.Show
End Sub

Private Sub Command2_Click()
Form3.Show

End Sub

Private Sub Command3_Click()
Form4.Show

End Sub

Private Sub Command4_Click()
Form5.Show

End Sub

Private Sub Command5_Click()
Unload Me
End Sub

