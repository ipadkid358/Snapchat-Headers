/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCChangePasswordResponse : NSObject {

	BOOL _isSuccess;
	BOOL _isReauthNeeded;
	NSString* _errorMessage;

}

@property (assign,nonatomic) BOOL isSuccess;                       //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) BOOL isReauthNeeded;                  //@synthesize isReauthNeeded=_isReauthNeeded - In the implementation block
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(void)setIsSuccess:(BOOL)arg1 ;
-(void)setIsReauthNeeded:(BOOL)arg1 ;
-(BOOL)isReauthNeeded;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(BOOL)isSuccess;
@end
