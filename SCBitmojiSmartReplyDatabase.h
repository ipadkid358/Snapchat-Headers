/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EGODatabase;

@interface SCBitmojiSmartReplyDatabase : NSObject {

	EGODatabase* _database;

}

@property (nonatomic,retain) EGODatabase * database;              //@synthesize database=_database - In the implementation block
-(void)_setUpDatabase:(id)arg1 ;
-(id)_parseData:(id)arg1 suggestions:(id)arg2 ;
-(void)_populateDatabase:(id)arg1 entries:(id)arg2 ;
-(id)initWithExistingDatabase:(int)arg1 databaseLocation:(id)arg2 ;
-(BOOL)updateDatabase:(int)arg1 metadata:(id)arg2 suggestions:(id)arg3 databaseLocation:(id)arg4 ;
-(id)fetchSuggestionsForSticker:(id)arg1 avatarIds:(id)arg2 topKToShuffle:(int)arg3 ;
-(EGODatabase *)database;
-(void)setDatabase:(EGODatabase *)arg1 ;
@end

