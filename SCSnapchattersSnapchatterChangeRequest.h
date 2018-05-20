/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:03 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCDocObjectChangeRequest.h>

@class NSString, NSArray, SCSnapchattersBitmojiInfo, SCSnapchattersFideliusFriendInfo, SCSnapchattersFriendInfo, SCSnapchattersIncomingFriendInfo, SCSnapchattersSuggestedSnapchatterInfo, SCSnapchattersContactSnapchatterInfo;

@interface SCSnapchattersSnapchatterChangeRequest : NSObject <SCDocObjectChangeRequest> {

	long long _rowid;
	int _requestType;
	BOOL _isPopular;
	NSString* _userId;
	NSString* _username;
	NSString* _displayName;
	NSArray* _friendmojis;
	SCSnapchattersBitmojiInfo* _bitmojiInfo;
	SCSnapchattersFideliusFriendInfo* _fideliusFriendInfo;
	SCSnapchattersFriendInfo* _friendInfo;
	SCSnapchattersIncomingFriendInfo* _incomingFriendInfo;
	SCSnapchattersSuggestedSnapchatterInfo* _suggestedSnapchatterInfo;
	SCSnapchattersContactSnapchatterInfo* _contactSnapchatterInfo;

}

@property (nonatomic,copy) NSString * userId;                                                              //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy) NSString * username;                                                            //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                         //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL isPopular;                                                               //@synthesize isPopular=_isPopular - In the implementation block
@property (nonatomic,copy) NSArray * friendmojis;                                                          //@synthesize friendmojis=_friendmojis - In the implementation block
@property (nonatomic,copy) SCSnapchattersBitmojiInfo * bitmojiInfo;                                        //@synthesize bitmojiInfo=_bitmojiInfo - In the implementation block
@property (nonatomic,copy) SCSnapchattersFideliusFriendInfo * fideliusFriendInfo;                          //@synthesize fideliusFriendInfo=_fideliusFriendInfo - In the implementation block
@property (nonatomic,copy) SCSnapchattersFriendInfo * friendInfo;                                          //@synthesize friendInfo=_friendInfo - In the implementation block
@property (nonatomic,copy) SCSnapchattersIncomingFriendInfo * incomingFriendInfo;                          //@synthesize incomingFriendInfo=_incomingFriendInfo - In the implementation block
@property (nonatomic,copy) SCSnapchattersSuggestedSnapchatterInfo * suggestedSnapchatterInfo;              //@synthesize suggestedSnapchatterInfo=_suggestedSnapchatterInfo - In the implementation block
@property (nonatomic,copy) SCSnapchattersContactSnapchatterInfo * contactSnapchatterInfo;                  //@synthesize contactSnapchatterInfo=_contactSnapchatterInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)creationRequestWithSnapchattersSnapchatter:(id)arg1 ;
+(id)changeRequestForSnapchattersSnapchatter:(id)arg1 ;
+(id)deletionRequestForSnapchattersSnapchatter:(id)arg1 ;
-(void)createTableWithSQLite:(sqlite3Ref)arg1 ;
-(id)transactWithSQLite:(SQLiteConnection*)arg1 flatbuffers:(FlatBufferBuilder*)arg2 ;
-(NSArray *)friendmojis;
-(BOOL)isPopular;
-(void)setFriendmojis:(NSArray *)arg1 ;
-(void)setIsPopular:(BOOL)arg1 ;
-(SCSnapchattersBitmojiInfo *)bitmojiInfo;
-(SCSnapchattersFideliusFriendInfo *)fideliusFriendInfo;
-(SCSnapchattersFriendInfo *)friendInfo;
-(SCSnapchattersIncomingFriendInfo *)incomingFriendInfo;
-(SCSnapchattersSuggestedSnapchatterInfo *)suggestedSnapchatterInfo;
-(SCSnapchattersContactSnapchatterInfo *)contactSnapchatterInfo;
-(id)initWithRowid:(long long)arg1 userId:(id)arg2 username:(id)arg3 displayName:(id)arg4 isPopular:(BOOL)arg5 friendmojis:(id)arg6 bitmojiInfo:(id)arg7 fideliusFriendInfo:(id)arg8 friendInfo:(id)arg9 incomingFriendInfo:(id)arg10 suggestedSnapchatterInfo:(id)arg11 contactSnapchatterInfo:(id)arg12 ;
-(id)_snapchattersSnapchatter;
-(void)setBitmojiInfo:(SCSnapchattersBitmojiInfo *)arg1 ;
-(void)setFideliusFriendInfo:(SCSnapchattersFideliusFriendInfo *)arg1 ;
-(void)setFriendInfo:(SCSnapchattersFriendInfo *)arg1 ;
-(void)setIncomingFriendInfo:(SCSnapchattersIncomingFriendInfo *)arg1 ;
-(void)setSuggestedSnapchatterInfo:(SCSnapchattersSuggestedSnapchatterInfo *)arg1 ;
-(void)setContactSnapchatterInfo:(SCSnapchattersContactSnapchatterInfo *)arg1 ;
-(const char*)table;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setUserId:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end
