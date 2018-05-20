/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TCV3ConversationCtx : NSObject {

	int _usersWithBitmojiCount;
	NSString* _scopeId;
	NSString* _mac;
	NSString* _token;
	NSDictionary* _usernameToUserId;

}

@property (nonatomic,readonly) NSString * scopeId;                           //@synthesize scopeId=_scopeId - In the implementation block
@property (nonatomic,readonly) NSString * mac;                               //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) NSString * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSDictionary * usernameToUserId;              //@synthesize usernameToUserId=_usernameToUserId - In the implementation block
@property (nonatomic,readonly) int usersWithBitmojiCount;                    //@synthesize usersWithBitmojiCount=_usersWithBitmojiCount - In the implementation block
+(id)ConversationCtxWithScopeId:(id)arg1 mac:(id)arg2 token:(id)arg3 usernameToUserId:(id)arg4 usersWithBitmojiCount:(int)arg5 ;
-(id)initWithScopeId:(id)arg1 mac:(id)arg2 token:(id)arg3 usernameToUserId:(id)arg4 usersWithBitmojiCount:(int)arg5 ;
-(NSString *)scopeId;
-(NSDictionary *)usernameToUserId;
-(int)usersWithBitmojiCount;
-(id)description;
-(NSString *)token;
-(NSString *)mac;
@end

