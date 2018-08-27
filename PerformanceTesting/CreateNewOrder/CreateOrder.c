CreateOrder()
{

	web_add_auto_header("DNT", 
		"1");
	lr_start_transaction("CreateOrder");

	lr_think_time(16);

	web_url("8-home-accessories", 
		"URL=http://fo.demo.prestashop.com/en/8-home-accessories", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://fo.demo.prestashop.com/en/my-account", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_link("Mug The adventure begins", 
		"Text=Mug The adventure begins", 
		"Snapshot=t10.inf", 
		EXTRARES, 
		"Url=/themes/classic/assets/css/082a71677e756fb75817e8f262a07cb4.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/3a2aeeba930cc29e4d31ebfa1b7cdaa2.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/e049aeb07a2ae1627933e8e58d3886d2.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/8b05d51ede908907d65695558974d86f.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/99db8adec61e4fcf5586e1afa549b432.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/ffddcb3736980b23405b31142a324b62.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/b1db819132e64a3e01911a1413c33acf.svg", ENDITEM, 
		"Url=/themes/classic/assets/css/c1a65805f759901a39d10eb854c1dcf2.svg", ENDITEM, 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("cart", 
		"Action=http://fo.demo.prestashop.com/en/cart", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://fo.demo.prestashop.com/en/home-accessories/7-mug-the-adventure-begins.html", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=token", "Value=316ddd6342043aa621e87e095716c9b9", ENDITEM, 
		"Name=id_product", "Value=7", ENDITEM, 
		"Name=id_customization", "Value=0", ENDITEM, 
		"Name=qty", "Value=1", ENDITEM, 
		"Name=add", "Value=1", ENDITEM, 
		"Name=action", "Value=update", ENDITEM, 
		LAST);

	web_submit_data("ajax", 
		"Action=http://fo.demo.prestashop.com/en/module/ps_shoppingcart/ajax", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://fo.demo.prestashop.com/en/home-accessories/7-mug-the-adventure-begins.html", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_product_attribute", "Value=0", ENDITEM, 
		"Name=id_product", "Value=7", ENDITEM, 
		"Name=action", "Value=add-to-cart", ENDITEM, 
		LAST);

	web_submit_data("7-mug-the-adventure-begins.html", 
		"Action=http://fo.demo.prestashop.com/en/home-accessories/7-mug-the-adventure-begins.html", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://fo.demo.prestashop.com/en/home-accessories/7-mug-the-adventure-begins.html", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id_product_attribute", "Value=0", ENDITEM, 
		"Name=id_product", "Value=7", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_link("shopping_cart Cart (1)", 
		"Text=shopping_cart Cart (1)", 
		"Snapshot=t14.inf", 
		LAST);

	lr_think_time(5);

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	http://fo.demo.prestashop.com/en/order

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=http://fo.demo.prestashop.com/en/order", 
		"PollIntervalMs=2400", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	web_link("Proceed to checkout", 
		"Text=Proceed to checkout", 
		"Snapshot=t15.inf", 
		LAST);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_submit_data("order",
		"Action=http://fo.demo.prestashop.com/en/order",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://fo.demo.prestashop.com/en/order",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=id_address_delivery", "Value=431", ENDITEM,
		"Name=confirm-addresses", "Value=1", ENDITEM,
		LAST); 
	*/

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_submit_data("order_2",
		"Action=http://fo.demo.prestashop.com/en/order",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=http://fo.demo.prestashop.com/en/order",
		"Snapshot=t17.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=delivery_option[431]", "Value=2,", ENDITEM,
		"Name=delivery_message", "Value=", ENDITEM,
		"Name=confirmDeliveryOption", "Value=1", ENDITEM,
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);
//
//	web_submit_form("validation", 
//		"Action=http://fo.demo.prestashop.com/en/module/ps_wirepayment/validation", 
//		"Snapshot=t18.inf", 
//		ITEMDATA, 
//		LAST);		
	lr_end_transaction("CreateOrder",LR_AUTO);

	lr_start_transaction("Logout");

	web_link("&#xE7FF; Sign out", 
		"Text=&#xE7FF; Sign out", 
		"Snapshot=t19.inf", 
		LAST);

	lr_end_transaction("Logout",LR_AUTO);

	return 0;
}