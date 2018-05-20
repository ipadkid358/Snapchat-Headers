/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCArchiveObjectManager.h>

@class SCArchiveLoader, SCDynamicSectionsModelListenerAnnouncer, SCTiles, NSString;

@interface SCDynamicSectionsModelManager : NSObject <SCArchiveObjectManager> {

	BOOL _allowUnloadedModelAccess;
	SCArchiveLoader* _loader;
	SCDynamicSectionsModelListenerAnnouncer* _announcer;
	SCTiles* _tiles;

}

@property (nonatomic,retain) SCTiles * tiles;                                                    //@synthesize tiles=_tiles - In the implementation block
@property (nonatomic,readonly) SCArchiveLoader * loader;                                         //@synthesize loader=_loader - In the implementation block
@property (nonatomic,readonly) SCDynamicSectionsModelListenerAnnouncer * announcer;              //@synthesize announcer=_announcer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)handleLogout;
+(id)path;
+(id)shared;
-(SCDynamicSectionsModelListenerAnnouncer *)announcer;
-(/*^block*/id)_loadedBlock;
-(void)loadFromDiskAsync:(BOOL)arg1 ;
-(void)markAsLoadedWithoutLoadingFromDisk;
-(BOOL)shouldLoadFromDiskImmediately;
-(void)waitUntilModelLoadsWithCallback:(/*^block*/id)arg1 ;
-(void)accessPotentiallyUnloadedModelWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)clear;
-(void)setTiles:(SCTiles *)arg1 ;
-(BOOL)saveState;
-(SCTiles *)tiles;
-(SCArchiveLoader *)loader;
@end
