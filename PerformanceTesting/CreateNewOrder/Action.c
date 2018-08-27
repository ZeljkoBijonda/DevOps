Action()
{

	web_add_cookie("_ga=GA1.3.207652262.1534923554; DOMAIN=demo.prestashop.com");

	web_add_cookie("_gid=GA1.3.1115675473.1534923554; DOMAIN=demo.prestashop.com");

	web_add_auto_header("DNT", 
		"1");

	web_url("en", 
		"URL=http://demo.prestashop.com/en/?view=front", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../fonts/montserrat/montserrat-regular-webfont.eot", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=http://www.googletagmanager.com/gtm.js?id=GTM-WHRX84", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		LAST);

	web_add_cookie("PrestaShop-4bb6ae1aa7371e7b5cfd3bc505157360="
		"def5020073fdb3f753ccbf42ac57e10e430e47abb5e370a2e09d70196264c357fcfa47d2045acd7273f0dee8ff2a460c82d6845987c51e9ef2a57838e1df6808db3b44f5ffd51a09ef4800fee61af121614d6c37e6024cd2ab11767cf2123d373d4782909a5e327e008efce659a8b24247bd34e465e128ba5ec26c01cad13bd8a015f30ec301fc0642eeddebf3426bab303c7d3363d51a1d4887deddc6974c4ffc66523a50214786a0bd274acddfe9b1122a246bdd8d33f0f3129d449a6e2633b1f04276311680e522964f057a063080f0e99d9ded999cdc556027655e1f33d63c57d8e2cfa7c698a0d4; DOMAIN=fo.demo.prestashop.com");

	web_add_cookie("_ga=GA1.3.207652262.1534923554; DOMAIN=fo.demo.prestashop.com");

	web_add_cookie("_gid=GA1.3.1115675473.1534923554; DOMAIN=fo.demo.prestashop.com");

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_link("Explore Front Office", 
		"Text=Explore Front Office", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=http://static.hotjar.com/c/hotjar-1869.js?sv=5", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=../themes/classic/assets/css/eeb9224f85430652fd070e4e64129aa4.eot", ENDITEM, 
		"Url=../themes/classic/assets/css/3d4a907b1b7a232654324a3dd7ae4aa3.eot", ENDITEM, 
		"Url=../themes/classic/assets/css/a77ade19de3d3762dfbf1fe553b293cc.eot", ENDITEM, 
		"Url=../themes/classic/assets/css/b467416c449eb823029e16347b2ea510.eot", ENDITEM, 
		"Url=../themes/classic/assets/css/012cf6a10129e2275d79d6adac7f3b02.woff", ENDITEM, 
		"Url=../js/jquery/ui/themes/base/minified/images/ui-bg_flat_75_ffffff_40x100.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://www.google-analytics.com/r/collect?v=1&_v=j68&a=166184568&t=pageview&_s=1&dl=http%3A%2F%2Fdemo.prestashop.com%2Fen%2F%3Fview%3Dfront&ul=en-us&de=utf-8&dt=PrestaShop%20Demo&sd=24-bit&sr=1920x1200&vp=1903x1041&je=1&_u=QACAAAQ~&jid=186999601&gjid=1004328029&cid=207652262.1534923554&tid=UA-2753771-28&_gid=1115675473.1534923554&_r=1&gtm=G86WHRX84&z=280812997", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://connect.facebook.net/en_US/fbevents.js", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://connect.facebook.net/signals/config/1686979971533717?v=2.8.25&r=stable", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://static.ads-twitter.com/oct.js", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		LAST);

	web_add_cookie("1P_JAR=2018-08-14-08; DOMAIN=fonts.gstatic.com");

	web_add_cookie("CONSENT=WP.270480; DOMAIN=fonts.gstatic.com");

	web_add_cookie("fr=0ZoKS1FL0P0NHPMqZ..BbfRJI...1.0.BbfRJI.; DOMAIN=www.facebook.com");

	web_url("adsct", 
		"URL=http://t.co/i/adsct?p_id=Twitter&p_user_id=0&txn_id=nubwx&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.prestashop.com/en/?view=front", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/materialicons/v41/flUhRq6tzZclQEJ-Vdg-IuiaDsNa.woff", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=1686979971533717&ev=PageView&dl=http%3A%2F%2Fdemo.prestashop.com%2Fen%2F%3Fview%3Dfront&rl=&if=false&ts=1535028932466&sw=1920&sh=1200&v=2.8.25&r=stable&ec=0&o=12&it=1535028932385", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://www.facebook.com/tr/?id=1686979971533717&ev=Microdata&dl=http%3A%2F%2Fdemo.prestashop.com%2Fen%2F%3Fview%3Dfront&rl=&if=false&ts=1535028933981&cd[Schema.org]=%5B%5D&cd[OpenGraph]=%7B%7D&cd[Meta]=%7B%22title%22%3A%22PrestaShop%20Demo%22%2C%22meta%3Adescription%22%3A%22Looking%20for%20a%20powerful%20shopping%20cart%20software%3F%20Try%20the%20PrestaShop%20Demo%20now%20and%20visualize%20it%20on%20mobile%2C%20tablet%20and%20desktop.%22%7D&cd[DataLayer]=%5B%5D&sw=1920&sh=1200&v=2.8.25&r="
		"stable&ec=1&o=12&it=1535028932385&es=automatic", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		"Url=https://script.hotjar.com/modules-a2eb922d886353f87615b29be79e4b5a.js", "Referer=http://demo.prestashop.com/en/?view=front", ENDITEM, 
		LAST);

	web_url("rcj-da10bd4908deb9e19dfde013ec3fe4ff.html", 
		"URL=https://vars.hotjar.com/rcj-da10bd4908deb9e19dfde013ec3fe4ff.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.prestashop.com/en/?view=front", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("personalization_id=\"v1_HpDmKxQqpBowIXv0JbFrWw==\"; DOMAIN=analytics.twitter.com");

	web_url("adsct_2", 
		"URL=https://analytics.twitter.com/i/adsct?p_id=Twitter&p_user_id=0&txn_id=nubwx&tw_sale_amount=0&tw_order_quantity=0&tw_iframe_status=0&tpx_cb=twttr.conversion.loadPixels&tw_document_href=http%3A%2F%2Fdemo.prestashop.com%2Fen%2F%3Fview%3Dfront", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://demo.prestashop.com/en/?view=front", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Login");

	web_add_cookie("_gat_UA-2753771-28=1; DOMAIN=fo.demo.prestashop.com");

	web_add_cookie("_hjIncludedInSample=1; DOMAIN=fo.demo.prestashop.com");

	web_url("my-account", 
		"URL=http://fo.demo.prestashop.com/en/my-account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://fo.demo.prestashop.com/en/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("login", 
		"Snapshot=t7.inf", 
		ITEMDATA, 
		"Name=email", "Value=a@b.com", ENDITEM, 
		"Name=password", "Value=zeljko", ENDITEM, 
		LAST);

	lr_end_transaction("Login",LR_AUTO);

	return 0;
}
