/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCChunkItem.h>
#import <Snapchat/MediaDataSource.h>

@class NSData, Media, NSString;

@interface SCChunkOverlayItem : SCChunkItem <MediaDataSource> {

	NSData* _overlayDataToSave;
	BOOL _sponsored;
	Media* _media;
	unsigned long long _docking;
	unsigned long long _zIndex;
	NSString* _chunkHash;

}

@property (nonatomic,copy) NSString * chunkHash;                      //@synthesize chunkHash=_chunkHash - In the implementation block
@property (nonatomic,retain) Media * media;                           //@synthesize media=_media - In the implementation block
@property (assign,nonatomic) unsigned long long docking;              //@synthesize docking=_docking - In the implementation block
@property (assign,nonatomic) unsigned long long zIndex;               //@synthesize zIndex=_zIndex - In the implementation block
@property (assign,nonatomic) BOOL sponsored;                          //@synthesize sponsored=_sponsored - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didDecodeObject;
-(BOOL)sponsored;
-(unsigned long long)docking;
-(id)cacheMediaIds;
-(NSString *)chunkHash;
-(BOOL)needsAuthToFetch;
-(id)mediaIdForMedia:(id)arg1 ;
-(id)decryptData:(id)arg1 forMedia:(id)arg2 ;
-(id)encryptionDictionaryForMedia:(id)arg1 ;
-(void)setChunkHash:(NSString *)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2 ;
-(void)saveMediaToCache;
-(BOOL)imageMediaExistsInCache;
-(id)initWithID:(id)arg1 docking:(unsigned long long)arg2 sponsored:(BOOL)arg3 ;
-(void)ensureNonNilMediaObjects;
-(void)setDocking:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setZIndex:(unsigned long long)arg1 ;
-(unsigned long long)zIndex;
-(BOOL)persist;
-(void)setSponsored:(BOOL)arg1 ;
-(Media *)media;
-(void)setMedia:(Media *)arg1 ;
-(BOOL)encrypt;
-(id)requestContexts;
@end
