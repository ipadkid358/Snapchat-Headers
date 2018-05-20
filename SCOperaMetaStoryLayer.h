/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOperaLayer.h>

@class SCSearchStoryInfo, SCSearchFriendStoryInfo, SCSearchStoryContext, SCOperaPage, NSString;

@interface SCOperaMetaStoryLayer : NSObject <SCOperaLayer> {

	BOOL _shouldShowQueryDebugButton;
	SCSearchStoryInfo* _searchStoryInfo;
	SCSearchFriendStoryInfo* _searchFriendStoryInfo;
	SCSearchStoryContext* _searchStoryContext;
	SCOperaPage* _page;
	NSString* _snapImageURLString;

}

@property (nonatomic,readonly) SCSearchStoryInfo * searchStoryInfo;                          //@synthesize searchStoryInfo=_searchStoryInfo - In the implementation block
@property (nonatomic,readonly) SCSearchFriendStoryInfo * searchFriendStoryInfo;              //@synthesize searchFriendStoryInfo=_searchFriendStoryInfo - In the implementation block
@property (nonatomic,readonly) SCSearchStoryContext * searchStoryContext;                    //@synthesize searchStoryContext=_searchStoryContext - In the implementation block
@property (assign,nonatomic,__weak) SCOperaPage * page;                                      //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowQueryDebugButton;                              //@synthesize shouldShowQueryDebugButton=_shouldShowQueryDebugButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * snapImageURLString;                           //@synthesize snapImageURLString=_snapImageURLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithProperties:(id)arg1 page:(id)arg2 ;
-(SCSearchStoryInfo *)searchStoryInfo;
-(id)initWithProperties:(id)arg1 page:(id)arg2 ;
-(BOOL)shouldShowQueryDebugButton;
-(NSString *)snapImageURLString;
-(SCSearchFriendStoryInfo *)searchFriendStoryInfo;
-(SCSearchStoryContext *)searchStoryContext;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)type;
-(SCOperaPage *)page;
-(void)setPage:(SCOperaPage *)arg1 ;
@end

