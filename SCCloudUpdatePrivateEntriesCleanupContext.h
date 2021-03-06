/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface SCCloudUpdatePrivateEntriesCleanupContext : NSObject {

	NSArray* _deletedSnaps;
	NSArray* _addedSnaps;
	NSDictionary* _snapIdToEntryIdMap;

}

@property (nonatomic,copy,readonly) NSArray * deletedSnaps;                    //@synthesize deletedSnaps=_deletedSnaps - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addedSnaps;                      //@synthesize addedSnaps=_addedSnaps - In the implementation block
@property (nonatomic,readonly) NSDictionary * snapIdToEntryIdMap;              //@synthesize snapIdToEntryIdMap=_snapIdToEntryIdMap - In the implementation block
-(NSArray *)deletedSnaps;
-(id)initWithAddedSnaps:(id)arg1 deletedSnaps:(id)arg2 snapIdToEntryIdMap:(id)arg3 ;
-(NSArray *)addedSnaps;
-(NSDictionary *)snapIdToEntryIdMap;
@end

