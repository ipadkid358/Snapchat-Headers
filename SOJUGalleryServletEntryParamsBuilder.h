/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray;

@interface SOJUGalleryServletEntryParamsBuilder : NSObject {

	NSString* _entryId;
	NSNumber* _entryType;
	NSArray* _snapIds;
	NSArray* _snapsUploadInfo;
	NSArray* _highlightedSnapIds;
	NSNumber* _seqNum;
	NSNumber* _createTime;
	NSString* _title;
	NSNumber* _isPrivate;
	NSNumber* _lastAutosaveTime;
	NSString* _externalId;
	NSArray* _snapOperations;
	NSNumber* _entrySource;
	NSNumber* _isServerGenerated;

}
+(id)withJUGalleryServletEntryParams:(id)arg1 ;
-(id)setSeqNumValue:(long long)arg1 ;
-(id)setCreateTimeValue:(long long)arg1 ;
-(id)setEntryTypeValue:(int)arg1 ;
-(id)setEntryTypeEnum:(long long)arg1 ;
-(id)setIsPrivateValue:(BOOL)arg1 ;
-(id)setLastAutosaveTimeValue:(long long)arg1 ;
-(id)setEntrySourceValue:(int)arg1 ;
-(id)setEntrySourceEnum:(long long)arg1 ;
-(id)setIsServerGeneratedValue:(BOOL)arg1 ;
-(id)setEntryId:(id)arg1 ;
-(id)setSnapIds:(id)arg1 ;
-(id)setSnapsUploadInfo:(id)arg1 ;
-(id)setHighlightedSnapIds:(id)arg1 ;
-(id)setCreateTime:(id)arg1 ;
-(id)setIsPrivate:(id)arg1 ;
-(id)setLastAutosaveTime:(id)arg1 ;
-(id)setSnapOperations:(id)arg1 ;
-(id)setEntrySource:(id)arg1 ;
-(id)setIsServerGenerated:(id)arg1 ;
-(id)setTitle:(id)arg1 ;
-(id)build;
-(id)setExternalId:(id)arg1 ;
-(id)setEntryType:(id)arg1 ;
-(id)setSeqNum:(id)arg1 ;
@end

