/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:56 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUStickerPacksResponse.h>
@class NSArray, SOJUStickerSearchPack, SOJUStickerConfig, SOJUMegaStickerPackMetadata, SOJUBitmojiSmartReply, SOJUStickerPackGiphyStickerConfig;


@protocol SOJUStickerPacksResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSArray * stickerPacks; 
@property (nonatomic,copy,readonly) SOJUStickerSearchPack * searchPack; 
@property (nonatomic,copy,readonly) SOJUStickerConfig * stickerConfig; 
@property (nonatomic,copy,readonly) NSArray * stickerPacksV2; 
@property (nonatomic,copy,readonly) NSArray * searchPacksV2; 
@property (nonatomic,copy,readonly) NSArray * featuredStickers; 
@property (nonatomic,copy,readonly) SOJUMegaStickerPackMetadata * megaStickerPack; 
@property (nonatomic,copy,readonly) SOJUBitmojiSmartReply * bitmojiSmartReply; 
@property (nonatomic,copy,readonly) SOJUStickerPackGiphyStickerConfig * giphyConfig; 
@required
-(NSArray *)stickerPacks;
-(SOJUStickerSearchPack *)searchPack;
-(SOJUStickerConfig *)stickerConfig;
-(NSArray *)stickerPacksV2;
-(NSArray *)searchPacksV2;
-(NSArray *)featuredStickers;
-(SOJUMegaStickerPackMetadata *)megaStickerPack;
-(SOJUBitmojiSmartReply *)bitmojiSmartReply;
-(SOJUStickerPackGiphyStickerConfig *)giphyConfig;

@end


@class NSArray, SOJUStickerSearchPack, SOJUStickerConfig, SOJUMegaStickerPackMetadata, SOJUBitmojiSmartReply, SOJUStickerPackGiphyStickerConfig, NSString;

@interface SOJUStickerPacksResponse : NSObject <SOJUStickerPacksResponse> {

	NSArray* _stickerPacks;
	SOJUStickerSearchPack* _searchPack;
	SOJUStickerConfig* _stickerConfig;
	NSArray* _stickerPacksV2;
	NSArray* _searchPacksV2;
	NSArray* _featuredStickers;
	SOJUMegaStickerPackMetadata* _megaStickerPack;
	SOJUBitmojiSmartReply* _bitmojiSmartReply;
	SOJUStickerPackGiphyStickerConfig* _giphyConfig;

}

@property (nonatomic,copy,readonly) NSArray * stickerPacks;                                       //@synthesize stickerPacks=_stickerPacks - In the implementation block
@property (nonatomic,copy,readonly) SOJUStickerSearchPack * searchPack;                           //@synthesize searchPack=_searchPack - In the implementation block
@property (nonatomic,copy,readonly) SOJUStickerConfig * stickerConfig;                            //@synthesize stickerConfig=_stickerConfig - In the implementation block
@property (nonatomic,copy,readonly) NSArray * stickerPacksV2;                                     //@synthesize stickerPacksV2=_stickerPacksV2 - In the implementation block
@property (nonatomic,copy,readonly) NSArray * searchPacksV2;                                      //@synthesize searchPacksV2=_searchPacksV2 - In the implementation block
@property (nonatomic,copy,readonly) NSArray * featuredStickers;                                   //@synthesize featuredStickers=_featuredStickers - In the implementation block
@property (nonatomic,copy,readonly) SOJUMegaStickerPackMetadata * megaStickerPack;                //@synthesize megaStickerPack=_megaStickerPack - In the implementation block
@property (nonatomic,copy,readonly) SOJUBitmojiSmartReply * bitmojiSmartReply;                    //@synthesize bitmojiSmartReply=_bitmojiSmartReply - In the implementation block
@property (nonatomic,copy,readonly) SOJUStickerPackGiphyStickerConfig * giphyConfig;              //@synthesize giphyConfig=_giphyConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSArray *)stickerPacks;
-(SOJUStickerSearchPack *)searchPack;
-(SOJUStickerConfig *)stickerConfig;
-(NSArray *)stickerPacksV2;
-(NSArray *)searchPacksV2;
-(NSArray *)featuredStickers;
-(SOJUMegaStickerPackMetadata *)megaStickerPack;
-(SOJUBitmojiSmartReply *)bitmojiSmartReply;
-(SOJUStickerPackGiphyStickerConfig *)giphyConfig;
-(id)initWithStickerPacks:(id)arg1 searchPack:(id)arg2 stickerConfig:(id)arg3 stickerPacksV2:(id)arg4 searchPacksV2:(id)arg5 featuredStickers:(id)arg6 megaStickerPack:(id)arg7 bitmojiSmartReply:(id)arg8 giphyConfig:(id)arg9 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end

