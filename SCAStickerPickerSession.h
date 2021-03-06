/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:05 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAUserTrackedEvent.h>
#import <Snapchat/MapSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSDate;

@interface SCAStickerPickerSession : SCAUserTrackedEvent <MapSerializable, NSCopying> {

	NSNumber* stickerSubsectionViewCount;
	NSNumber* stickerSectionsViewCount;
	NSNumber* viewTimeSec;
	NSNumber* withStickerPick;
	NSNumber* withSearch;
	NSNumber* searchSequenceId;
	NSNumber* withBitmojiTabVisible;
	NSNumber* contextualStickerLoadTime;
	long long stickerSourceTab;
	long long stickerPickerType;
	NSString* stickerSectionsViewed;
	NSString* stickerSectionsEntryEvents;
	NSString* snapSessionId;
	NSString* stickerSessionId;
	NSString* searchTerm;
	NSDate* sessionStartTime;
	NSDate* sessionEndTime;

}
-(void)setSnapSessionId:(id)arg1 ;
-(void)setViewTimeSec:(double)arg1 ;
-(id)getEventName;
-(long long)getEventQoS;
-(double)getSamplingRate;
-(double)getViewTimeSec;
-(BOOL)getWithSearch;
-(void)setWithSearch:(BOOL)arg1 ;
-(BOOL)getWithBitmojiTabVisible;
-(void)setWithBitmojiTabVisible:(BOOL)arg1 ;
-(id)getSnapSessionId;
-(long long)getSearchSequenceId;
-(void)setSearchSequenceId:(long long)arg1 ;
-(long long)getStickerSourceTab;
-(void)setStickerSourceTab:(long long)arg1 ;
-(long long)getStickerPickerType;
-(void)setStickerPickerType:(long long)arg1 ;
-(id)getStickerSessionId;
-(void)setStickerSessionId:(id)arg1 ;
-(id)getSearchTerm;
-(long long)getStickerSubsectionViewCount;
-(void)setStickerSubsectionViewCount:(long long)arg1 ;
-(long long)getStickerSectionsViewCount;
-(void)setStickerSectionsViewCount:(long long)arg1 ;
-(BOOL)getWithStickerPick;
-(void)setWithStickerPick:(BOOL)arg1 ;
-(long long)getContextualStickerLoadTime;
-(void)setContextualStickerLoadTime:(long long)arg1 ;
-(id)getStickerSectionsViewed;
-(void)setStickerSectionsViewed:(id)arg1 ;
-(id)getStickerSectionsEntryEvents;
-(void)setStickerSectionsEntryEvents:(id)arg1 ;
-(id)getSessionStartTime;
-(id)getSessionEndTime;
-(void)setSessionEndTime:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSearchTerm:(id)arg1 ;
-(void)setSessionStartTime:(id)arg1 ;
-(id)asDictionary;
@end

