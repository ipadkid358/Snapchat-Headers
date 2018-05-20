/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMessageRecipient.h>

@class NSString;

@interface SCMessageAPIRecipient : NSObject <SCMessageRecipient> {

	NSString* _identifier;
	long long _recipientType;

}

@property (nonatomic,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long recipientType;              //@synthesize recipientType=_recipientType - In the implementation block
+(id)recipientListForFriends:(id)arg1 ;
+(id)recipientListForGroups:(id)arg1 ;
+(id)singleRecipientWithId:(id)arg1 withType:(long long)arg2 ;
+(id)recipientListForFriends:(id)arg1 forGroups:(id)arg2 ;
-(id)getId;
-(id)initWithIdentifier:(id)arg1 withType:(long long)arg2 ;
-(NSString *)identifier;
-(long long)getType;
-(long long)recipientType;
@end
