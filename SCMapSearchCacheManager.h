/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class SCUserSession, NSCache, NSString;

@interface SCMapSearchCacheManager : NSObject <NSCacheDelegate> {

	SCUserSession* _userSession;
	NSCache* _thumbnailImageCache;
	NSCache* _userIdToScoreCache;
	NSCache* _mapSnapshotCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(unsigned long long)_currentClusterCount;
-(BOOL)_isCachedObjectStillValid:(id)arg1 ;
-(void)clearEmbeddedMapSnapshot;
-(id)scoreForPerson:(id)arg1 ;
-(void)setScore:(id)arg1 forPerson:(id)arg2 ;
-(id)thumbnailForThumbnailId:(id)arg1 ;
-(void)setThumbnailImage:(id)arg1 thumbnailId:(id)arg2 ;
-(void)setEmbeddedMapSnapshot:(id)arg1 ;
-(id)embeddedMapSnapshot;
-(void)clearThumbnailsAndScores;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end

