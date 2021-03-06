/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString, SCSnapCommonLoggingParameters, NSMutableSet;

@interface SCStickerPickerLogger : NSObject {

	unsigned long long _sourceType;
	NSDate* _startTime;
	NSString* _stickerSessionId;
	long long _searchSequenceId;
	SCSnapCommonLoggingParameters* _commonLoggingParameters;
	NSMutableSet* _indexPathsViewed;
	NSMutableSet* _superCategoriesViewed;

}
+(void)logFriendmojiPickerCloseWithSourceType:(long long)arg1 stickerId:(id)arg2 friendmojiType:(long long)arg3 snapSessionId:(id)arg4 mischiefId:(id)arg5 ;
-(void)resetStickerSession;
-(id)_sanitizeSearchTerm:(id)arg1 ;
-(void)_logStickerSearchStickerPickerEvents:(id)arg1 categoryCell:(id)arg2 query:(id)arg3 index:(unsigned long long)arg4 sourceTab:(long long)arg5 stickerPickerType:(long long)arg6 ;
-(void)_logStickerPickerStickerPick:(id)arg1 categoryCell:(id)arg2 searchQuery:(id)arg3 index:(unsigned long long)arg4 sourceTab:(long long)arg5 stickerPickerType:(long long)arg6 ;
-(void)_logStickerPickerSessionWithSticker:(id)arg1 fromSearch:(BOOL)arg2 searchQuery:(id)arg3 bitmojiTabVisible:(BOOL)arg4 sourceTab:(long long)arg5 stickerPickerType:(long long)arg6 ;
-(void)_logStickerPickerSearch:(id)arg1 results:(id)arg2 ;
-(void)_fireEvent:(id)arg1 ;
-(void)_logStickerPickerStickerPickEvent:(id)arg1 sticker:(id)arg2 categoryCell:(id)arg3 searchQuery:(id)arg4 index:(unsigned long long)arg5 sourceTab:(long long)arg6 stickerPickerType:(long long)arg7 ;
-(id)initWithSourceType:(unsigned long long)arg1 commonLoggingParameters:(id)arg2 ;
-(void)logStickerPickerSessionEnded:(id)arg1 categoryCell:(id)arg2 searchQuery:(id)arg3 index:(unsigned long long)arg4 bitmojiTabVisible:(BOOL)arg5 tabSource:(long long)arg6 stickerPickerType:(long long)arg7 ;
-(void)logStickerPickerSearchEvent:(id)arg1 results:(id)arg2 ;
-(void)viewStickerCategoryAtIndex:(id)arg1 type:(long long)arg2 ;
-(BOOL)_isActive;
@end

