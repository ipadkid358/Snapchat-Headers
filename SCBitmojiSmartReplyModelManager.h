/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCQueuePerformer, SCBitmojiSmartReplyDatabase, SCUserSession, NSNumber, NSString;

@interface SCBitmojiSmartReplyModelManager : NSObject {

	BOOL _lastProcessedStickerHadResults;
	SCQueuePerformer* _performer;
	SCBitmojiSmartReplyDatabase* _database;
	SCUserSession* _userSession;
	NSNumber* _lastProcessedMessageSequenceNumber;
	NSString* _lastProcessedStickerId;

}

@property (nonatomic,retain) SCQueuePerformer * performer;                               //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) SCBitmojiSmartReplyDatabase * database;                     //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                                //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) NSNumber * lastProcessedMessageSequenceNumber;              //@synthesize lastProcessedMessageSequenceNumber=_lastProcessedMessageSequenceNumber - In the implementation block
@property (nonatomic,retain) NSString * lastProcessedStickerId;                          //@synthesize lastProcessedStickerId=_lastProcessedStickerId - In the implementation block
@property (assign,nonatomic) BOOL lastProcessedStickerHadResults;                        //@synthesize lastProcessedStickerHadResults=_lastProcessedStickerHadResults - In the implementation block
-(SCQueuePerformer *)performer;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(void)resetModel;
-(int)_localModelVersion;
-(void)fetchAndUpdateDatabase:(id)arg1 ;
-(id)_dictionaryFromJSON:(id)arg1 ;
-(void)storeModelVersion:(int)arg1 ;
-(void)_logBitmojiToBitmojiSuggestedReply;
-(void)updateBitmojiSmartReplyModel:(id)arg1 ;
-(void)fetchSuggestionsForSticker:(id)arg1 message:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSNumber *)lastProcessedMessageSequenceNumber;
-(void)setLastProcessedMessageSequenceNumber:(NSNumber *)arg1 ;
-(NSString *)lastProcessedStickerId;
-(void)setLastProcessedStickerId:(NSString *)arg1 ;
-(BOOL)lastProcessedStickerHadResults;
-(void)setLastProcessedStickerHadResults:(BOOL)arg1 ;
-(id)init;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(SCBitmojiSmartReplyDatabase *)database;
-(void)setDatabase:(SCBitmojiSmartReplyDatabase *)arg1 ;
@end
