/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:38 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCPerforming;
@class SCGalleryLensInfoIndexer, SCGallerySearch, NSCache, SCPromise;

@interface SCGalleryMadeWithLensesEntriesProvider : NSObject {

	SCGalleryLensInfoIndexer* _lensInfoIndexer;
	SCGallerySearch* _gallerySearch;
	id<SCPerforming> _performer;
	NSCache* _inMemoryFaceCountCache;
	SCPromise* _snapIdsForFaceRelatedTagsPromise;

}
-(id)initWithLensInfoIndexer:(id)arg1 gallerySearch:(id)arg2 performer:(id)arg3 ;
-(void)startUpdatingData;
-(void)stopUpdatingData;
-(void)loadNextEntriesWithCount:(long long)arg1 originalEntries:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_onlyFaceSnapEntriesFromEntries:(id)arg1 snapIdsForFaceRelatedTags:(id)arg2 ;
-(BOOL)_evaluateGalleryEntry:(id)arg1 ;
-(BOOL)_isImageSnap:(id)arg1 ;
-(long long)_lensFaceCountForSnap:(id)arg1 ;
@end

