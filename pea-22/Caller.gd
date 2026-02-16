extends Node


@export var receiver: Node = null

func _ready():
	print("Hello Friend")
	
	if receiver != null and receiver.has_method("OnCalled"):
		receiver.OnCalled()
	else:
		print("Error: Receiver reference not set or invalid!")
