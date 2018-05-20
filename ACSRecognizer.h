/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class A9VSAuthentication;

@interface ACSRecognizer : NSObject {

	A9VSAuthentication* _authenticator;

}

@property (nonatomic,retain) A9VSAuthentication * authenticator;              //@synthesize authenticator=_authenticator - In the implementation block
-(id)recognizeForImage:(id)arg1 username:(id)arg2 ;
-(id)recognizeForBarcode:(id)arg1 username:(id)arg2 ;
-(A9VSAuthentication *)authenticator;
-(void)setAuthenticator:(A9VSAuthentication *)arg1 ;
@end
