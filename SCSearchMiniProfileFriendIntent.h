/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchIntent.h>

@class Friend, SCSearchMiniProfileExtraLoggingData, NSString;

@interface SCSearchMiniProfileFriendIntent : NSObject <SCSearchIntent> {

	Friend* _aFriend;
	/*^block*/id _callbackBlock;
	SCSearchMiniProfileExtraLoggingData* _loggingData;

}

@property (nonatomic,retain) Friend * aFriend;                                                      //@synthesize aFriend=_aFriend - In the implementation block
@property (nonatomic,copy,readonly) id callbackBlock;                                               //@synthesize callbackBlock=_callbackBlock - In the implementation block
@property (nonatomic,copy,readonly) SCSearchMiniProfileExtraLoggingData * loggingData;              //@synthesize loggingData=_loggingData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAFriend:(Friend *)arg1 ;
-(Friend *)aFriend;
-(id)initWithFriend:(id)arg1 callbackBlock:(/*^block*/id)arg2 loggingData:(id)arg3 ;
-(SCSearchMiniProfileExtraLoggingData *)loggingData;
-(id)initWithFriend:(id)arg1 loggingData:(id)arg2 ;
-(id)callbackBlock;
@end
