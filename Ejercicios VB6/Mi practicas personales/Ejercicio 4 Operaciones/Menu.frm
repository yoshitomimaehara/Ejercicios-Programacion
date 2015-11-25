VERSION 5.00
Begin VB.Form Form1 
   BackColor       =   &H00C0FFC0&
   Caption         =   "Las 4 Operaciones"
   ClientHeight    =   4620
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   4935
   ControlBox      =   0   'False
   Icon            =   "Menu.frx":0000
   LinkTopic       =   "Form1"
   ScaleHeight     =   4620
   ScaleWidth      =   4935
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command5 
      Appearance      =   0  'Flat
      Caption         =   "salir"
      Height          =   855
      Left            =   1800
      MaskColor       =   &H00C0FFC0&
      Picture         =   "Menu.frx":0442
      Style           =   1  'Graphical
      TabIndex        =   4
      Top             =   3600
      Width           =   1095
   End
   Begin VB.CommandButton Command4 
      Caption         =   "Divide"
      Height          =   735
      Left            =   3120
      MaskColor       =   &H00C0FFC0&
      Style           =   1  'Graphical
      TabIndex        =   3
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton Command3 
      Appearance      =   0  'Flat
      Caption         =   "Multiplica"
      Height          =   735
      Left            =   360
      MaskColor       =   &H00C0FFC0&
      Style           =   1  'Graphical
      TabIndex        =   2
      Top             =   2400
      Width           =   1215
   End
   Begin VB.CommandButton Command2 
      Appearance      =   0  'Flat
      Caption         =   "Resta"
      Height          =   735
      Left            =   3120
      MaskColor       =   &H00C0FFC0&
      Style           =   1  'Graphical
      TabIndex        =   1
      Top             =   1200
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Appearance      =   0  'Flat
      Caption         =   "Suma"
      Height          =   735
      Left            =   360
      MaskColor       =   &H00C0FFC0&
      Style           =   1  'Graphical
      TabIndex        =   0
      Top             =   1200
      Width           =   1215
   End
   Begin VB.Label Label1 
      BackStyle       =   0  'Transparent
      Caption         =   "Las 4 operaciones"
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
      Left            =   840
      TabIndex        =   5
      Top             =   240
      Width           =   3135
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command5_Click()
Unload Me
End Sub
