//Vezérlő

var wishesModel = new WishesModel();

function NewWishActivity()
{
	var wv = new WishesView();
	wv.onSubmit(item => 
	{
		wishesModel.add(item);
		NewWishActivity();
	});
}
function ListActivity()
{
	var lv = new ListView();
}

AppView.SetupNavigation([
	NewWishActivity,
	ListActivity
]);
ListActivity();
