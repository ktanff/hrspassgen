#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

static const char *car[]={"abattoir", "able", "abrading", "abrasive", "abrasiveband", "abrasives", "absorption", "abstractor", "academic", 
  "academy", "accelerator", "accessories", "accordion", "account", "accountant", "accounting", "accounts", "acid", "acidplant", "acidtank",
  "acoustical", "acquisition", "acquisitions", "acrobat", "acrobatic", "activities", "actor", "actuary", "addresser", "adhesive",
  "adjudicator", "adjuster", "adjustment", "admiralty", "admissions", "admitting", "adventure", "advertising", "adviser", "advisor",
  "advocate", "aerial", "aerialist", "aerialtram", "aeronautical", "aerospace", "affairs", "agate", "agency", "agent", "ager", "agricultural",
  "agriculture", "agronomist", "aide", "airandwater", "airbag", "airborne", "airbrush", "aircarrier", "aircraft", "aircraftlog", "airhole",
  "airline", "airplane", "airport", "airtable", "airvalve", "alarm", "aligner", "aligning", "allaround", "allocator", "alloy", "allround",
  "almond", "almondpaste", "alpine", "alteration", "alterations", "alum", "aluminaplant", "aluminum", "aluminumpool", "alumni", "alumplant",
  "amalgamator", "ambassador", "ambulance", "ammonia", "ammoniastill", "ammunition", "amphibian", "ampoule", "amusement", "analysis",
  "analyst", "anatomist", "anesthetist", "angiogram", "angle", "anhydrous", "animal", "animalfeed", "animalride", "animated", "animation",
  "anklepatch", "annealer", "announcer", "anode", "anodecrew", "anodizer", "antenna", "antisqueak", "antitank", "apiculturist", "apparatus",
  "apparel", "appeals", "applepacking", "appliance", "appliances", "application", "applications", "applicator", "applied", "applier",
  "appliquer", "appointment", "appointments", "appraiser", "apprentice", "apron", "aquarist", "aquatic", "arbitrator", "arbor", "arborer",
  "arborpress", "arcade", "archeologist", "architect", "archivist", "archsupport", "area", "armament", "armature", "armhole", "armor",
  "armored", "armoredcar", "armorer", "arranger", "arresting", "arrowsmith", "artifacts", "artificer", "artificial", "artillery", "artist",
  "artists", "arts", "asbestos", "asbestoswire", "asphalt", "assault", "assayer", "assembled", "assembler", "assemblies", "assembly",
  "assemblyline", "assignment", "assistant", "associate", "association", "assorter", "assurance", "astrologer", "astronomer", "athlete",
  "athletes", "athletic", "atmospheric", "atomicfuel", "atomizer", "attacher", "attaching", "attendance", "attendant", "attorney", "auction",
  "auctioneer", "audiologist", "audiometrist", "audiovideo", "audiovisual", "audit", "auditing", "auditmachine", "auditor", "auger",
  "authorizer", "auto", "autobody", "autoclave", "autodesign", "automat", "automatcar", "automated", "automatic", "automation", "automobile",
  "automobiles", "automotive", "auxiliary", "aviation", "avionics", "awning", "awningframe", "awninghanger", "axle", "axminster", "babbitter",
  "babysitting", "babystroller", "back", "backboard", "backer", "backliner", "backshoe", "bacon", "baggage", "bagger", "bagging", "bagmachine",
  "bags", "bailer", "bailiff", "bait", "baker", "bakery", "balance", "balancer", "balancewheel", "balancing", "balcony", "bale", "baler",
  "ball", "baller", "ballistics", "ballmachine", "ballmill", "balloon", "ballpoint", "ballwarper", "banana", "band", "bandandcuff", "bander",
  "bandmachine", "bandoleer", "bandsaw", "bandtop", "bank", "banking", "banknote", "banquet", "barbecue", "barber", "barge", "barker",
  "barkpress", "barley", "barn", "barometers", "barrel", "barrelbridge", "barrelcap", "barrellathe", "barrelraiser", "barrelrib", "bartender",
  "base", "baseball", "based", "basedraw", "basefiller", "baseply", "basin", "basket", "baster", "basting", "batch", "batcher", "batchrecords",
  "batchstill", "batchtank", "bath", "bather", "bathmix", "battalion", "batter", "batterout", "battery", "batteryparts", "beach", "bead",
  "beader", "beading", "beadmachine", "beadworker", "beam", "beamdyer", "beamer", "beaming", "beamwarper", "bearingring", "beater",
  "beautician", "beauty", "bedder", "bedding", "bedspring", "beehive", "beekeeper", "beer", "beet", "bell", "bellhop", "bellneck", "bellows",
  "belly", "belt", "beltandlink", "beltbuilder", "beltmaker", "beltpress", "bench", "benchmolder", "benchshear", "benday", "bender",
  "benefits", "bevel", "beveler", "beverage", "biasmachine", "bicycle", "billet", "billing", "billposter", "billposting", "binder", "bindery",
  "binding", "biochemist", "biochemistry", "biographer", "biological", "biologist", "biology", "biomedical", "biophysicist", "bird",
  "birdcage", "birth", "bisque", "biteblock", "bitsharpener", "black", "blackmill", "blacksmith", "blade", "blancher", "blanket", "blankmaker",
  "blanks", "blast", "blaster", "blastfurnace", "blastingcap", "bleach", "bleachboiler", "bleacher", "bleachliquor", "bleachrange", "blemish",
  "blender", "blending", "blendingline", "blendingtank", "blind", "blindstitch", "blintze", "block", "blockbreaker", "blocker", "blockers",
  "blockpress", "blocks", "blood", "blooddonor", "blooming", "blower", "blown", "blowoff", "blowpit", "blowup", "blueprint", "bluer", "board",
  "boarder", "boarding", "boardliner", "boardmachine", "boards", "boat", "boatbuilder", "boatbuilders", "boatcanvas", "boathoist",
  "boatloader", "boatoar", "boatrental", "boats", "boatswain", "bobbin", "bobbinwinder", "body", "bodyguard", "bodymakeup", "boiler",
  "boilerhouse", "boilermaker", "boilermaking", "boilerout", "boilerroom", "boilingtub", "bolt", "bolter", "bomb", "bonded", "bonder",
  "bonding", "bone", "bonechar", "bonecooking", "bonedrier", "boneprocess", "boner", "boning", "bonsai", "book", "bookbinder", "booker",
  "booking", "bookkeeper", "bookkeeping", "bookmobile", "books", "boomconveyor", "booster", "boot", "booth", "bootmaker", "border", "borer",
  "boringmill", "boss", "botanist", "bottle", "bottlehouse", "bottles", "bottling", "bottlingline", "bottom", "bottomer", "bottomhoop",
  "bottomsaw", "bouncer", "bowl", "bowling", "bowlingball", "bowls", "bowstring", "boxer", "boxes", "boxing", "boxsealing", "boxspring",
  "boxsprings", "boxtruck", "boys", "brace", "bracelet", "braider", "braidpattern", "braille", "brake", "brakelining", "braker", "brakes",
  "bran", "branch", "brand", "brander", "brasswind", "brazer", "brazing", "breading", "breakandload", "breaker", "breakoff", "breast",
  "breaster", "breeder", "breeding", "brew", "brewery", "brewing", "briar", "briarwood", "brick", "bricklayer", "bridge", "bright", "brim",
  "brimandcrown", "brimer", "brine", "brinemixer", "briner", "brinetank", "brinewell", "brineyard", "briquette", "briquetter", "broacher",
  "broadcast", "broker", "brokerage", "brooch", "broom", "broomcorn", "broommaker", "broommaking", "broth", "browning", "brownstock", "brush",
  "brusher", "brushes", "brushhead", "brushmachine", "bucker", "bucket", "buckle", "buckleframe", "buckler", "bucklewire", "budder", "budget",
  "buffer", "buffet", "buffing", "buffingline", "buffingwheel", "buffs", "builder", "builderup", "building", "buildings", "bulb", "bulbs",
  "bulk", "bulker", "bulkhead", "bulkplant", "bulksealer", "bulkstation", "bullchain", "bulldozer", "bullet", "bullgang", "bunch", "bundle",
  "bundler", "bundles", "bung", "bureau", "burial", "burlap", "burler", "burling", "burner", "burning", "burningplant", "burnisher", "burnout",
  "burr", "burrer", "bursar", "bush", "busher", "business", "butcher", "butler", "butt", "butter", "buttermaker", "button", "buttoner",
  "buttonhole", "buyer", "buzzsaw", "byproducts", "cabana", "cabin", "cabinet", "cabinetmaker", "cable", "cablesplicer", "caddie", "cadet",
  "cadmium", "cafeteria", "cage", "cager", "cake", "cakepress", "calcine", "calciner", "calculator", "calender", "calenderer", "calendering",
  "calenderroll", "calibration", "calibrator", "caller", "callout", "camera", "camouflage", "camp", "camper", "campground", "canary",
  "canceling", "cancellation", "canconveyor", "candle", "candlemaker", "candler", "candles", "candy", "candymaker", "cane", "caner", "canine",
  "canned", "cannery", "cannonpinion", "canoe", "canopy", "cans", "canteen", "cantor", "canvas", "canvasworker", "capacitor", "capandhat",
  "capjewel", "caponizer", "capper", "caprifier", "captain", "caption", "capturer", "caramel", "carbide", "carbon", "carbonation",
  "carbonizer", "carbonpaper", "carburetor", "carcass", "carcleaning", "card", "cardboard", "carder", "cardiac", "carding", "cardiologist",
  "cardroom", "cardumper", "care", "career", "caretaker", "cargo", "carpenter", "carpenters", "carpet", "carpetlayer", "carpetloom", "carpets",
  "carrepairer", "carretarder", "carrier", "carriers", "carroter", "cartographer", "cartographic", "cartography", "carton", "cartoon",
  "cartoonist", "cartoons", "cartridge", "carver", "carwash", "case", "caseloader", "caser", "cash", "cashier", "cashiers", "cashregister",
  "casing", "casingfluid", "casinginline", "casket", "caster", "casting", "castinghouse", "castingplug", "castingroom", "castings",
  "castingwheel", "catalog", "cataloger", "catalyst", "catcher", "caterer", "catheter", "cathode", "caulker", "caulking", "caustic",
  "causticiser", "cavity", "cdarea", "cdmixer", "cdreactor", "cell", "cellar", "cellars", "celltender", "celluloid", "cement", "cementer",
  "cementmason", "cemetery", "censor", "center", "centerer", "centerless", "centerpunch", "central", "centrifugal", "centrifuge", "ceramic",
  "ceramics", "ceramist", "cereal", "certified", "chain", "chainstitch", "chair", "chalk", "chalker", "change", "changehouse", "changeover",
  "changer", "channel", "channeler", "chaperon", "chaperone", "char", "character", "charcoal", "charconveyor", "chardust", "charfilter",
  "charge", "charger", "charrer", "chart", "charter", "chartered", "chartwriter", "chaser", "chauffeur", "check", "checker", "checkerer",
  "checkerin", "checkers", "checkroom", "cheese", "cheesemaker", "cheesemaking", "chef", "chemical", "chemicals", "chemicaltest", "chemist",
  "cheniller", "cherry", "cherrypicker", "chick", "chicken", "chief", "child", "childcare", "children", "childrens", "chili", "chiller",
  "chillinghood", "chimney", "china", "chinstrap", "chip", "chipbin", "chipper", "chips", "chiropractor", "chlorinator", "chocolate", "choke",
  "chopper", "choral", "christian", "chronograph", "chronometer", "chucker", "church", "churn", "churner", "chute", "cigar", "cigarette",
  "cigarhead", "cigarmaking", "cigarwrapper", "circle", "circuit", "circuitry", "circuits", "circular", "circulating", "circulation", "circus",
  "circustrain", "cisternroom", "citrus", "city", "civil", "civilservice", "claim", "claims", "clam", "clamp", "clamper", "clampjig",
  "clarifier", "classer", "classified", "classifiedad", "classifier", "clay", "claystain", "cleaner", "cleaners", "cleaning", "cleanout",
  "cleanrice", "clearance", "clearing", "cleat", "cleaver", "clergy", "clergyman", "clerk", "clerkcashier", "clerks", "clerktypist",
  "clinical", "clip", "clipbolter", "clipon", "clipper", "clippings", "clock", "clocker", "clocks", "closer", "cloth", "clothbale",
  "clothbolt", "clothedge", "clothgrader", "clothier", "clothing", "clothprinter", "clothstock", "clothwasher", "clown", "club", "clutch",
  "coach", "coagulation", "coal", "coalyard", "coat", "coater", "coating", "coatingmixer", "cobbler", "cocoabean", "cocoapress", "cocoaroom",
  "code", "coder", "coffee", "coil", "coiledcoil", "coiler", "coiling", "coils", "coilwinding", "coin", "coiner", "coinmachine", "coins",
  "coke", "cokecrusher", "cold", "coldmill", "coldpress", "coldroll", "coldrolling", "collar", "collarturner", "collator", "collection",
  "collections", "collector", "college", "collet", "colleter", "color", "colorcard", "colorer", "coloring", "colorist", "colorpaste",
  "colorprinter", "column", "columnistcommentator", "combat", "comber", "combination", "combiner", "combmachine", "combustion", "comedian",
  "command", "commander", "commanding", "commercial", "commissary", "commission", "committee", "commodities", "community", "commutator",
  "compact", "companion", "company", "comparator", "comparison", "compensation", "compensator", "compiler", "complaint", "complaints",
  "complete", "compo", "component", "components", "composer", "composing", "composites", "composition", "compositor", "compound", "compounder",
  "compressed", "compressor", "computator", "computer", "computerized", "computers", "concentrator", "conche", "concrete", "concretepipe",
  "concreting", "condenser", "conditioner", "conditioning", "conductor", "conduit", "cone", "connector", "conservation", "conservator",
  "console", "construction", "constructor", "consultant", "contact", "contactlens", "contacts", "container", "containers", "contestant",
  "contingents", "continuity", "continuous", "contour", "contract", "contractor", "contracts", "control", "controlled", "controller",
  "controlpanel", "controls", "converter", "convertible", "conveyor", "cook", "cookbox", "cooker", "cooking", "cooler", "coolingpan",
  "coolingpipe", "coolingroom", "cooper", "cooperage", "coordinate", "coordinator", "coper", "coppersmith", "copra", "copy", "copyist",
  "copylathe", "copyright", "cord", "cordage", "corder", "corduroy", "core", "corecomposer", "corecutter", "coredrill", "coremaker",
  "coreoven", "coreroom", "cork", "corn", "corncob", "corner", "cornerer", "corngrinder", "cornpress", "coroner", "corporation", "correction",
  "correctional", "corrective", "corrector", "corrosion", "corrugator", "corset", "corsets", "cosmetics", "cost", "costume", "costumer",
  "costuming", "cotta", "cotton", "cottonball", "cottonroll", "counseling", "counselor", "counter", "county", "coupler", "coupon", "courses",
  "court", "courtesy", "cover", "coverer", "covering", "coverings", "covermaker", "covers", "coverstitch", "cowpuncher", "crab", "crabber",
  "cracker", "crackingunit", "craft", "crafts", "crane", "cranecrew", "crash", "crate", "crater", "crayon", "cream", "creaser", "creative",
  "credit", "creditcard", "creel", "creeler", "cremator", "cresylate", "crew", "crewmember", "crib", "crime", "criminal", "criminalist",
  "crimp", "crimper", "cripple", "critic", "crocheter", "crook", "crop", "crops", "crossband", "crosscutter", "crossing", "crown",
  "crownwheel", "crozemachine", "crudeoil", "cruelty", "cruiser", "crusher", "crushing", "crutcher", "crystal", "crystallizer", "cuff",
  "culler", "cullet", "culture", "culturist", "cupboard", "cupola", "curator", "curb", "curbmachine", "cured", "curedmeat", "curer", "curing",
  "curingbin", "curingoven", "curingpress", "curler", "currency", "curtains", "curvature", "cushion", "custodian", "custom", "customer",
  "customizer", "customs", "cutandcover", "cutch", "cutfile", "cutin", "cutlet", "cutoff", "cutoffsaw", "cutter", "cutterslicer",
  "cuttertruer", "cutting", "cylinder", "cytogenetic", "cytologist", "dado", "dairy", "damage", "dampener", "dance", "dancer", "dancing",
  "data", "database", "dater", "dauber", "dayhaul", "deaf", "dealer", "dean", "debeaker", "deblocker", "deboner", "debrander", "debubblizer",
  "deburrer", "decal", "decals", "decapper", "decaycontrol", "deck", "decker", "deckhand", "decor", "decorating", "decorative", "decorator",
  "deep", "defect", "defense", "defensive", "definer", "deflash", "deflector", "degreaser", "dehydrator", "deicer", "deicerkit", "deionizer",
  "deli", "delineator", "deliverer", "delivery", "delta", "demolition", "demonstrator", "demurrage", "density", "dental", "dentist", "denture",
  "denturemodel", "deodorizer", "department", "depilatory", "deposit", "deputy", "derrick", "derrickboat", "design", "designer", "designs",
  "desk", "deskpenset", "desktop", "destaticizer", "desulfurizer", "detacker", "detail", "detailer", "detasseling", "detective", "dethistler",
  "detonator", "developer", "development", "devices", "devulcanizer", "dewaterer", "dextrine", "diagnostic", "diagrammer", "dial", "dialer",
  "dials", "dialscrew", "dialysis", "dialyzer", "diamond", "diamonddie", "diaper", "dice", "dicer", "dictator", "dictionary", "diecasting",
  "diedesigner", "diedrawing", "diemaker", "dies", "diesel", "dieselengine", "dieselplant", "diesinker", "diet", "dietary", "dietetic",
  "dietician", "dietitian", "dietryout", "diffuser", "diffusion", "digester", "digestion", "digger", "digitizer", "dimension", "dining",
  "dinkey", "diplube", "dipper", "directional", "directmail", "director", "disabled", "disassembler", "disaster", "disbursement", "disc",
  "discpad", "discpadplate", "disease", "disker", "dispatcher", "dispenser", "dispensing", "display", "displayer", "displays", "disposal",
  "disposition", "dissolver", "distillation", "distiller", "distillery", "distresser", "distributing", "distribution", "distributor",
  "distributors", "district", "ditch", "ditcher", "diver", "diversified", "dividend", "diving", "division", "dobby", "dock", "doctor",
  "document", "doffer", "dogandcat", "doll", "dolls", "dolly", "domer", "domestic", "door", "doorcloser", "doorkeeper", "doormachine", "doors",
  "doortodoor", "dopedryhouse", "doping", "dorr", "dosimetrist", "double", "dough", "doughmixer", "doughnut", "dowel", "dowelmachine",
  "drafter", "drafting", "drag", "dragline", "drainer", "drama", "dramatic", "draper", "draperies", "drapery", "draperyhead", "draperyrod",
  "draughtsman", "drawbench", "drawbridge", "drawer", "drawerin", "drawframe", "drawing", "drawingframe", "drawingkiln", "drawings",
  "drawmachine", "drawstring", "dredge", "dredging", "dressed", "dresser", "dressing", "dressmaker", "dried", "drier", "driermachine",
  "driertakeoff", "drifter", "drill", "drillbit", "driller", "drilling", "drillpress", "drillpunch", "drip", "dripbox", "drivein", "driver",
  "drivers", "driverscash", "driving", "drop", "drophammer", "dropper", "dropwire", "dross", "drug", "drugs", "drum", "drumdrier", "drummer",
  "drycans", "drycell", "drycleaner", "dryend", "dryfood", "dryhouse", "drying", "dryingoven", "dryingrack", "dryingroom", "drykiln", "drypan",
  "drypress", "drystarch", "drywall", "dualhose", "duct", "dude", "dulser", "dumbwaiters", "dump", "dumper", "dumperbailer", "dumptruck",
  "duplicating", "duplicator", "dust", "dustbrush", "duster", "dustless", "dustmill", "dustmop", "duty", "dyed", "dyedyarn", "dyehouse",
  "dyelab", "dyer", "dyerange", "dyereel", "dyestand", "dyetank", "dyetub", "dyeweigher", "dynamite", "dynamometer", "earmold", "earmuff",
  "earring", "earth", "ecologist", "economist", "eddycurrent", "edge", "edger", "edgermachine", "edging", "editor", "editorial", "education",
  "educational", "educator", "effects", "elastic", "elastictape", "election", "electric", "electrical", "electriccell", "electricfork",
  "electricgas", "electrician", "electricsign", "electrictool", "electrifier", "electrode", "electrodes", "electroless", "electrolytic",
  "electron", "electronbeam", "electronic", "electronics", "electroslag", "electrotype", "electrotyper", "element", "elementary", "elevator",
  "elevators", "embalmer", "emblem", "embossed", "embosser", "embossing", "embossograph", "embroiderer", "embroidery", "emergency",
  "emissions", "emotionally", "employee", "employer", "employment", "enameler", "encapsulator", "encaser", "encyclopedia", "endband",
  "endless", "endodontist", "enforcement", "engine", "engineer", "engineering", "enginelathe", "enginerepair", "engines", "engraver",
  "engraving", "engrosser", "enlisted", "entertainer", "entomologist", "entry", "envelope", "epitaxial", "epoxy", "equal", "equalizer",
  "equestrian", "equipment", "erection", "erector", "escalators", "escape", "escort", "escrow", "estate", "estimator", "etch", "etcher",
  "ethnologist", "evaluation", "evaluator", "evaporator", "eviscerator", "examiner", "excavator", "exchange", "excise", "executive",
  "exercise", "exerciser", "exhaust", "exhauster", "exhibit", "exhibitor", "expander", "expanding", "expansion", "expediter", "expedition",
  "expeditor", "expeller", "experimental", "expert", "explosion", "explosive", "export", "express", "extension", "exterminator", "external",
  "extra", "extractive", "extractor", "extruder", "extruding", "extrusion", "extrusiondie", "eyedropper", "eyeglass", "eyeglasslens",
  "eyeletpunch", "fabric", "fabricating", "fabrication", "fabricator", "fabriclayout", "fabrics", "face", "facepiece", "facer", "facilitator",
  "facilities", "facility", "facing", "factory", "faculty", "faller", "family", "fanblade", "fancywire", "fareregister", "farm", "farmer",
  "farming", "farmmachine", "farmworker", "fashion", "fast", "fastener", "fasteners", "fastfoods", "faucets", "feather", "featheredger",
  "feed", "feeder", "feedin", "feedmixer", "feedresearch", "felledseam", "feller", "felt", "feltgoods", "felthat", "feltmaker", "feltstrip",
  "fence", "fenceerector", "fencemaking", "fermentation", "fermenter", "fermenting", "ferry", "ferryboat", "fertilizer", "fettler", "fiber",
  "fiberglass", "fiberlocking", "fibermachine", "fibrous", "fiction", "field", "fieldcontact", "fieldcrop", "fieldmap", "fieldring",
  "fieldservice", "fighter", "figure", "file", "filer", "files", "filler", "fillerblock", "filling", "film", "filmcasting", "filmortape",
  "filmrental", "filmvault", "filter", "filterer", "filterplant", "filterpress", "filters", "filterscreen", "filtertank", "filtration",
  "final", "financial", "finder", "findings", "fine", "finer", "finger", "fingernail", "fingerprint", "finish", "finished", "finisher",
  "finishercard", "finishing", "fire", "firearms", "firebrick", "firecontrol", "firefighter", "firehose", "fireman", "firer", "firesetter",
  "fireworks", "first", "firstaid", "firstbreaker", "fish", "fishbin", "fishcake", "fishegg", "fisher", "fishing", "fishinglure",
  "fishingreel", "fishingrod", "fishingtool", "fishliver", "fishmachine", "fishnet", "fishstringer", "fitness", "fitter", "fitterplacer",
  "fitting", "fittings", "fixedcapital", "fixer", "fixture", "fixtures", "flagger", "flake", "flakeboard", "flakecutter", "flaker",
  "flakingroll", "flame", "flamer", "flanger", "flangingroll", "flare", "flash", "flashdrier", "flasher", "flat", "flatcar", "flatware",
  "flatwork", "flavor", "flavoring", "flavorings", "fleece", "flesher", "flexer", "flexographic", "flight", "flighttest", "floater", "floats",
  "flocker", "floor", "flooring", "floorlayer", "floorspace", "floorworker", "floral", "florist", "floss", "flotation", "flour",
  "flourblender", "flow", "flower", "flowers", "fluid", "fluidpower", "flumer", "fluorescent", "fluoroscope", "flusher", "flux", "fluxtube",
  "flyer", "flying", "flyingshear", "foam", "foamgun", "foammachine", "focuser", "folder", "folderseamer", "foldertier", "folding", "follower",
  "followup", "food", "foods", "foodservice", "foot", "footmiter", "footwear", "force", "foreign", "foreman", "forepart", "forest", "forester",
  "forestfire", "forge", "forger", "forgeshop", "forging", "forgingpress", "forgingroll", "form", "formal", "former", "formgrader", "forming",
  "formingroll", "forms", "formtamper", "formula", "formularoom", "fortifier", "forwarder", "foster", "foundation", "foundry", "fountain",
  "fourh", "fourroll", "fowl", "foxing", "frame", "framer", "frames", "frametable", "framing", "franchise", "fraud", "frazer", "freezer",
  "freezingroom", "freight", "freightcar", "freshwork", "friction", "frier", "fringer", "froid", "front", "frontend", "frontsight", "frozen",
  "fruit", "fruitbar", "fruitbuying", "fruitgrader", "fruitpress", "fuel", "fuelhouse", "fueling", "fueloil", "fuels", "fuller", "fumigator",
  "functional", "fund", "fundraising", "funds", "funeral", "funhouse", "furblower", "furfloor", "furmachine", "furnace", "furnacestock",
  "furnishings", "furniture", "furrepair", "furrier", "furring", "furs", "furstorage", "fuse", "fusecup", "fuser", "galley", "gambling",
  "gambreler", "game", "gamebird", "gamefarm", "gang", "garage", "garbage", "garde", "garden", "gardener", "garland", "garment", "garnetter",
  "garnisher", "gasandoil", "gasappliance", "gascheckpad", "gasengine", "gases", "gasket", "gasleak", "gasmain", "gasmask", "gasmeter",
  "gasoline", "gasregulator", "gasser", "gastransfer", "gate", "gater", "gatherer", "gauge", "gauger", "gear", "gearshaper", "gearshaver",
  "gelatin", "genealogist", "general", "generator", "generators", "geneticist", "geodesist", "geodetic", "geographer", "geological",
  "geologist", "geophysical", "geophysicist", "germination", "getready", "getterer", "gift", "gilder", "gillbox", "ginner", "girdler", "girl",
  "girls", "glass", "glassbulb", "glasscutoff", "glasscutter", "glassfurnace", "glasslathe", "glasslined", "glasstube", "glassware",
  "glassworker", "glaze", "glazer", "glazier", "glazing", "globe", "glove", "gloveparts", "glue", "glued", "gluemachine", "gluemill", "gluer",
  "gluing", "glycerin", "goat", "gold", "goldbeater", "goldnib", "goldsmith", "golf", "golfball", "golfclub", "golfcourse", "golfrange",
  "goods", "goodwill", "gouger", "government", "governor", "grade", "grader", "gradercutter", "grading", "graduate", "grain", "graindrier",
  "grainer", "grand", "grant", "granulator", "grapher", "graphic", "graphite", "gratedcheese", "gravel", "graves", "gravity", "gravure",
  "graycloth", "grease", "greaser", "green", "greenchain", "greencoffee", "greenery", "greens", "greenskeeper", "greentire", "greeting",
  "greigegoods", "grinder", "grindermill", "grinding", "grindingmill", "grip", "grizzly", "groomer", "groover", "ground", "grounds", "group",
  "groupsales", "groutmachine", "grower", "growing", "growthmedia", "guard", "guesser", "guidance", "guide", "guidebase", "guider", "gunfire",
  "gunner", "gunrepair", "gunsmith", "gynecologist", "gypsum", "gyroscope", "hacker", "hackler", "hair", "hairboiler", "hairdresser",
  "hairsample", "hairspring", "hall", "hammer", "hammerer", "hammermill", "hammersmith", "hand", "handbag", "handerin", "handicapper",
  "handkerchief", "handle", "handler", "handling", "hands", "handtools", "hanger", "hanging", "harbor", "hard", "hardboard", "hardener",
  "hardness", "hardware", "harness", "harp", "harpaction", "harpsichord", "harvest", "harvester", "harvesting", "hasher", "hassock",
  "hatandcap", "hatblock", "hatbody", "hatch", "hatchery", "hatlining", "hatter", "hauler", "head", "headend", "header", "heading",
  "headingsaw", "headmachine", "headsaw", "headwaiterheadwaitress", "health", "hearing", "hearingaid", "hearse", "heat", "heater",
  "heaterplaner", "heating", "heatingplant", "heatsealer", "heattransfer", "heattreat", "heattreater", "heattreating", "heavy", "heavyforger",
  "heavymedia", "heddle", "heddles", "heel", "heelseat", "helmet", "help", "helper", "hemmer", "hemp", "herbarium", "herbicide", "herder",
  "hide", "hides", "high", "highdensity", "highway", "historian", "historic", "historicsite", "historycard", "hobber", "hobbies",
  "hobbingpress", "hoeing", "hogshead", "hoist", "hoisting", "holder", "hole", "hollow", "holter", "home", "homeenergy", "homemaker", "homes",
  "homeservice", "homicide", "homoeopath", "honey", "honeycomb", "honing", "hood", "hoof", "hook", "hooker", "hookerlaster", "hoop", "hooper",
  "hoopmaker", "hopper", "hopperfeeder", "horizontal", "horse", "horserace", "horseradish", "horseshoer", "hose", "hosecoupling", "hosetubing",
  "hosiery", "hospital", "hospitality", "hosthostess", "hostler", "hotcar", "hotcell", "hotdiepress", "hotdip", "hotel", "hothouse",
  "hotplate", "hotpress", "hotroom", "hotstone", "hotstrip", "hottop", "hottopliner", "hotwire", "hotwort", "hotwound", "house",
  "housecleaner", "household", "housekeeper", "housekeeping", "housemover", "housepiping", "hull", "huller", "human", "humidifier", "humorist",
  "hunter", "hunting", "hydraulic", "hydraulics", "hydrochloric", "hydrographer", "hydrologist", "hydrometer", "hydronic", "hydrosprayer",
  "hygienist", "icecream", "icer", "icing", "identifier", "igniter", "illuminating", "illustrator", "imaging", "immersion", "immigration",
  "impaired", "impersonator", "implant", "import", "impregnation", "impregnator", "impressed", "incinerator", "index", "indirect", "induction",
  "industrial", "industry", "infantry", "infants", "infection", "inflated", "inflatedpad", "inflight", "informal", "information", "ingot",
  "ingredient", "injector", "inked", "inker", "inlayer", "inletter", "innertube", "inseam", "insect", "insecticide", "inseminator", "inserter",
  "insertion", "inservice", "inset", "inside", "insidemeter", "insole", "inspecting", "inspection", "inspector", "installation", "installer",
  "instant", "instantizer", "institution", "instruction", "instructions", "instructor", "instrument", "instrumental", "instruments",
  "insulation", "insulator", "insurance", "integrated", "intelligence", "interference", "interior", "interlacer", "interleafer", "interline",
  "internal", "internist", "interpreter", "interstate", "interviewer", "inventory", "investigator", "investment", "ionexchange", "irishmoss",
  "ironer", "ironlaunder", "ironplastic", "ironworking", "irrigation", "irrigator", "issuer", "jack", "jacket", "jacketer", "jackhammer",
  "jacquard", "jacquardloom", "jailer", "jammer", "janitor", "janitorial", "jelly", "jewel", "jewelbearing", "jeweler", "jewelhole",
  "jeweller", "jewelry", "jigboring", "jigger", "jigsaw", "jigsawyer", "jinrikisha", "jobprinter", "jockey", "jockeyroom", "jogger", "joiner",
  "joiners", "joining", "joint", "jointer", "joints", "journalist", "judge", "juggler", "juice", "jumpbasting", "jumper", "junction", "jury",
  "keeper", "kelp", "kennel", "keno", "kettle", "keymodule", "kick", "kickpress", "killer", "kiln", "kilnburner", "kilndoor", "kilnoperator",
  "kilntransfer", "kindergarten", "kiss", "kitchen", "knife", "knifemachine", "knit", "knitgoods", "knitter", "knitting", "knockout",
  "knockup", "knotter", "kosher", "label", "labeler", "labels", "labor", "laboratory", "laborcrew", "laborer", "labourer", "lace", "lacer",
  "laceroller", "lacingstring", "lacquer", "lacquerer", "ladle", "lamber", "laminated", "laminating", "lamination", "laminator", "lamp",
  "lamps", "lampshade", "land", "landfill", "landleasing", "landscape", "lanemarker", "language", "lapel", "lapper", "lard", "larder", "large",
  "larry", "laser", "laserist", "last", "laster", "lasting", "lastmodel", "lastpattern", "lastrepairer", "latex", "latexer", "lathe", "lather",
  "lathing", "latrine", "launch", "launching", "launderer", "laundromat", "laundry", "laundrytub", "lawn", "lawnservice", "lawyer", "layaway",
  "layboy", "layer", "layout", "layup", "layups", "leacher", "lead", "leadburner", "leadcaster", "leader", "leadnitrate", "leadpress",
  "leadsection", "leaf", "leafsize", "leak", "leakage", "learner", "learning", "lease", "leaseout", "leasing", "leather", "leatherbelt",
  "lecturer", "legal", "legend", "lehr", "lending", "lens", "lensblank", "lensblock", "lensmold", "letterer", "lettering", "leveler",
  "levelvial", "lever", "leverslace", "liaison", "librarian", "library", "librettist", "license", "licensed", "licenser", "lieutenant", "life",
  "lifeguard", "lift", "lifter", "liftslab", "light", "lightbulb", "lightfixture", "lighting", "lightout", "lime", "limekiln", "limesludge",
  "limousine", "line", "lineerector", "linen", "linenroom", "linensupply", "lineout", "liner", "linermachine", "lines", "lineservice",
  "linesman", "lineup", "lingo", "linguist", "lining", "linings", "linker", "linotype", "linseed", "linseedoil", "linter", "lintersaw",
  "lipofshank", "liquefaction", "liquefier", "liquid", "liquidsugar", "liquor", "liquorbridge", "liquors", "lister", "litharge",
  "lithographic", "lithography", "live", "livestock", "load", "loadbuilder", "loader", "loading", "loadingrack", "loadingunit", "loadout",
  "loadtest", "loan", "lobbyist", "local", "locator", "lock", "lockerplant", "lockerroom", "locket", "locksmith", "lockstitch", "loco",
  "locomotive", "lodging", "loft", "logchipper", "logcutoff", "logger", "logging", "loghaul", "logistics", "logtruck", "long", "longchain",
  "longgoods", "longwall", "lookout", "loom", "loomfixer", "looms", "loomwinder", "looper", "looseend", "looseleaf", "lostandfound", "lounge",
  "loungecar", "lowerator", "lozenge", "lozengedough", "lubricating", "lubrication", "lubricator", "luggage", "lumber", "lumite", "lump",
  "lumpia", "lunchroom", "lunchtruck", "luster", "lyepeel", "lyricist", "mache", "machine", "machined", "machinepack", "machinery", "machines",
  "machineshop", "machinetank", "machining", "machinist", "magazine", "magician", "magistrate", "magnetic", "magnetictape", "magneto",
  "magnetvalve", "mail", "mailer", "mailroom", "mails", "main", "mainspring", "maintainer", "maintenance", "major", "maker", "makeup",
  "making", "makingline", "malt", "malted", "malthouse", "management", "manager", "managing", "manger", "mangle", "manglepress", "mangler",
  "manicurist", "manipulator", "mannequin", "manometer", "manual", "manualarts", "manualplate", "manufacture", "manufactured", "manufacturer",
  "manugrapher", "mapandchart", "maple", "maplesyrup", "mapping", "marble", "margarine", "margin", "marina", "marine", "marinecargo", "marker",
  "marketing", "marking", "marksmanship", "markup", "marquetry", "marriage", "marshal", "mash", "masher", "mashfilter", "mask", "masker",
  "masking", "mason", "masseurmasseuse", "master", "matchbook", "matcher", "matchup", "material", "materialcrew", "materials", "mathematical",
  "matmachine", "matmaking", "matrix", "matrixbath", "matrixdrier", "matron", "mattingpress", "mattress", "maturity", "meal", "mealgrinder",
  "measurement", "measurer", "measuring", "meat", "meatcutter", "meats", "mechanic", "mechanical", "mechanician", "mechanics", "mechanism",
  "mechinist", "media", "medical", "medication", "medicine", "melt", "melter", "melthouse", "member", "membership", "memorial", "mender",
  "mentally", "merchandise", "merchant", "merchantmill", "mercury", "mesh", "mess", "message", "messenger", "metal", "metalbed",
  "metalbonding", "metalcleaner", "metalcontrol", "metalfinish", "metalizing", "metallurgist", "metalreed", "metals", "meter", "meterreader",
  "method", "metrologist", "mexican", "mica", "micaplate", "micawasher", "microbiology", "microfiche", "microfilm", "microfilming",
  "microwave", "middlecard", "military", "milk", "milker", "milking", "milkpowder", "milkreceiver", "mill", "milledrubber", "miller",
  "milliner", "millinery", "milling", "milllabor", "milloperator", "millroll", "millwright", "mime", "mincemeat", "minder", "mine", "minecar",
  "miner", "mineralogist", "mines", "mingler", "miniatureset", "mining", "mirror", "missile", "miter", "mixcrusher", "mixer", "mixhouse",
  "mixing", "mixingplant", "mixingroll", "mixingtank", "mobile", "mobilelounge", "mobility", "mockup", "model", "modelandmold", "modeler",
  "modeling", "modelmaker", "models", "mohel", "moisture", "molasses", "mold", "molded", "moldedparts", "molder", "moldfilling", "molding",
  "moldinsert", "moldmaker", "moldmaking", "money", "moneyroom", "monitor", "monorail", "monument", "mophandle", "mophead", "morgue",
  "mortgage", "mortician", "mortuary", "mosaic", "mosaicist", "mosquito", "mother", "motion", "motor", "motorboat", "motorcycle", "motorcyles",
  "motorgrader", "motorized", "motorpower", "motorroom", "motors", "mottlelayup", "mottler", "mounter", "mouthpiece", "movable", "movement",
  "mover", "moving", "mudanalysis", "mudmill", "mudmixer", "mudplant", "muffler", "mule", "multifocal", "multiple", "multipledrum",
  "multipurpose", "municipal", "munitions", "museum", "museumorzoo", "mushroom", "music", "musical", "musician", "mvareactor", "mycologist",
  "nailer", "nameplate", "naphthalene", "napper", "narcotics", "narrator", "narrow", "narrowfabric", "naturalgas", "naturalist", "nature",
  "naturopathic", "naval", "navigating", "navigator", "neck", "necker", "necktie", "needle", "needlebar", "needleboard", "needleloom",
  "needlemaker", "needs", "negative", "nematologist", "neonsign", "neontube", "nesting", "netting", "network", "neurologist", "neutralizer",
  "newcar", "news", "newscaster", "newspaper", "newswriter", "nibbler", "nickelplant", "nicker", "night", "nightpatrol", "nitrator",
  "nodulizer", "nonfiction", "noodle", "noodlepress", "normalizer", "notch", "notcher", "notereader", "novelties", "novelty", "nozzle",
  "nuclear", "nuclearfuels", "nuclearplant", "numberer", "numerical", "nurse", "nursemidwife", "nursery", "nurses", "nursing", "nutandbolt",
  "nutprocess", "nutritional", "nutritionist", "nutsorter", "nylonhotwire", "oats", "objects", "observer", "obstetrician", "occupational",
  "octave", "oddpiece", "oddshoe", "offal", "offbearer", "office", "officer", "official", "offset", "offsetpress", "oiler", "oilfield",
  "oilpipe", "oilseal", "oilseedmeat", "oilspot", "oilwell", "olive", "opaquer", "open", "opener", "openhearth", "operating", "operation",
  "operational", "operations", "operator", "operators", "ophthalmic", "opportunity", "optical", "opticalglass", "optician", "optometric",
  "optometrist", "oral", "orchestra", "orchestrator", "orchid", "order", "ordercontrol", "orderer", "orderly", "ordinary", "ordnance",
  "organpipe", "organs", "oriental", "orientalrug", "orientation", "ornament", "ornamental", "orthodontic", "orthodontist", "orthopedic",
  "orthoptist", "orthotics", "orthotist", "osteopathic", "otter", "outboard", "outdoor", "outfitter", "outfitting", "outseamer", "outside",
  "outsideplant", "outsole", "outsoles", "oval", "oven", "ovenheater", "ovenpress", "ovens", "over", "overcoiler", "overedge", "overhauler",
  "overhead", "overlay", "overlock", "oxide", "oxidizer", "oxygenplant", "oyster", "package", "packager", "packages", "packaging", "packer",
  "packerfuser", "packing", "packingfloor", "packinghouse", "packingline", "packroom", "padder", "padding", "paddock", "padextractor",
  "padmachine", "pads", "page", "pager", "pail", "paint", "paintbrush", "painter", "painting", "paintings", "paintline", "paintroller",
  "paintspray", "paintsprayer", "pairer", "palladium", "pallbearer", "pallet", "palletizer", "palletstone", "pandrier", "panel", "panelboard",
  "panellayup", "panelmachine", "panels", "pantograph", "pantographer", "pantry", "pants", "paper", "paperboard", "papercone", "papercontrol",
  "paperhanger", "papernovelty", "paperpattern", "paperreel", "papier", "parachute", "paralegal", "paramedic", "parcel", "parent", "park",
  "parking", "parkinglot", "parkingmeter", "parlor", "part", "parter", "particle", "partition", "parts", "party", "passenger", "paste",
  "paster", "pasteup", "pasteurizer", "pasting", "pastoral", "pastry", "patch", "patcher", "patchmachine", "patent", "pathologist", "patients",
  "patrol", "patroller", "pattern", "patternchain", "patternlease", "patternmaker", "patternshop", "paving", "paymaster", "payroll",
  "paystation", "peanut", "peanutbutter", "pearl", "pearler", "pearlglue", "peat", "peddler", "pediatric", "pediatrician", "pedigree",
  "peeledpotato", "peeler", "pegger", "pelleter", "pelletizer", "pelletmill", "pelletpress", "pelota", "pelter", "penandpencil", "pencil",
  "pencils", "penetrant", "pens", "percolator", "percussion", "perforator", "performer", "perfumer", "perfusionist", "periodontist",
  "peripheral", "person", "personal", "personnel", "pest", "pesticide", "petroleum", "petrologist", "pets", "pewter", "pewterer", "pharmacist",
  "pharmacy", "pheresis", "philologist", "phlebotomist", "phonograph", "phosphate", "phosphatic", "phosphoric", "phosphorus", "photo",
  "photograph", "photographer", "photographers", "photographic", "photographs", "photography", "photooptics", "photoresist", "photostat",
  "physiatrist", "physical", "physically", "physician", "physicist", "physiologist", "piano", "pianos", "pick", "pickededge", "picker",
  "picking", "pickingtable", "pickle", "pickler", "pickling", "pickup", "picture", "pictures", "pieces", "pierce", "piercer", "piercingmill",
  "pigmachine", "pigment", "pile", "piledriver", "piler", "pillow", "pillowcase", "pilot", "pilotcontrol", "pinch", "pincher", "pingpong",
  "pinion", "pinker", "pinner", "pinorclip", "pinsetter", "pinsetting", "pipe", "pipeandtank", "pipefitter", "pipeline", "pipeliner",
  "pipelines", "pipeorgan", "pipes", "piston", "pitch", "pits", "pizza", "place", "placement", "placer", "placing", "plan", "planer",
  "planetarium", "planimeter", "planisher", "planner", "planning", "plant", "plantcare", "planter", "plants", "plasma", "plaster",
  "plasterdie", "plasterer", "plastering", "plastic", "plasticcard", "plastician", "plasticjoint", "plastics", "plastictop", "plate",
  "plategrainer", "platemaker", "platen", "platenpress", "plater", "platetakeout", "platform", "plating", "platinum", "player", "playerpiano",
  "playroom", "playwright", "pleasure", "pleat", "pleater", "pleating", "plodder", "plucker", "plug", "plugger", "plumber", "plumbing",
  "plush", "plywood", "pneumatic", "poacher", "pocket", "pockets", "podiatric", "podiatrist", "poet", "point", "pointer", "points", "poising",
  "polarizer", "pole", "poleyard", "police", "policychange", "policyvalue", "polisher", "polishing", "polishingpad", "political", "politician",
  "polyethylene", "polypacker", "polysilicon", "pompom", "pond", "pony", "pool", "popcorncandy", "popper", "pork", "port", "portable",
  "porter", "positioner", "post", "postoffice", "potato", "potatochip", "potline", "potlining", "potroom", "poultry", "pouncer", "pounder",
  "pour", "pourer", "powder", "powdered", "powderer", "powderline", "powdermill", "powdertruck", "power", "powerbarker", "powerchisel",
  "powered", "powerhouse", "powerplant", "powerpress", "powerreactor", "powersaw", "powershovel", "practical", "practitioner", "preassembler",
  "preassembly", "precast", "precaster", "precinct", "precipitate", "precipitator", "precise", "precision", "prefinish", "prefitter",
  "preform", "preforms", "preparation", "preparations", "preparedness", "preparer", "prepleater", "prepress", "preschool", "prescription",
  "preservation", "preservative", "president", "press", "pressbox", "pressed", "presser", "presshand", "pressing", "pressmachine", "presspipe",
  "pressroom", "pressure", "pressuretank", "pressuretest", "prestressed", "pretzel", "prevention", "pricer", "pricing", "pricker", "primary",
  "primer", "primerpowder", "principal", "print", "printed", "printer", "printing", "printingshop", "printline", "printmaker", "printshop",
  "private", "prize", "prizer", "probate", "probe", "procedures", "process", "processarea", "processes", "processing", "processor",
  "proctologist", "procurement", "produce", "producer", "product", "production", "productions", "products", "professional", "profile",
  "profiler", "profilesaw", "program", "programmer", "programming", "progress", "progressive", "project", "projectcrew", "projection",
  "promos", "promoter", "promotion", "prompter", "proof", "proofcoin", "proofer", "proofmachine", "proofpress", "proofreader", "proofsheet",
  "prop", "propagator", "propellant", "properties", "property", "propmaking", "proposals", "prose", "prospecting", "prospector", "prosthetics",
  "prosthetist", "protection", "protective", "prototype", "prover", "pruner", "psychiatric", "psychiatrist", "psychic", "psychologist",
  "public", "publications", "publichealth", "publicsafety", "publisher", "puff", "pugmill", "puller", "pullerover", "pulley", "pullman",
  "pullout", "pulp", "pulpandpaper", "pulpdrier", "pulper", "pulppress", "pulprefiner", "pulverizer", "pump", "pumper", "pumpergauger",
  "pumping", "pumppress", "pumpservicer", "pumpstation", "punch", "punchboard", "puncher", "punchpress", "pupil", "puppeteer", "purchasing",
  "purification", "purifier", "purser", "purses", "pusher", "putinbeat", "putteraway", "putterup", "putty", "puzzle", "pyridine", "pyrometer",
  "pyrotechnics", "quality", "quantity", "quarry", "quick", "quiller", "quilt", "quilter", "quilting", "quotation", "racer", "racetrack",
  "racing", "rack", "racker", "racket", "rackroom", "radial", "radialarmsaw", "radiation", "radio", "radioactive", "radiographer",
  "radiologic", "radiologist", "radiomessage", "radius", "rafter", "ragger", "rags", "railcar", "railroad", "railroadcar", "railtractor",
  "railway", "raised", "raiser", "raker", "ramp", "rampress", "ranch", "rancher", "range", "ranger", "ranging", "rasper", "rate", "rater",
  "rattle", "raveler", "rawcheese", "rawhidebone", "rawjuice", "rawsilk", "reactor", "reader", "readymixed", "reagent", "real", "realestate",
  "reamer", "rebrander", "rebuilder", "recapper", "receivable", "receiver", "receiving", "receptionist", "recesser", "recharger", "reclaimer",
  "reclamation", "record", "recorder", "recording", "recordings", "recordist", "recordpress", "records", "recoverer", "recovery", "recreation",
  "recreational", "recruit", "recruiter", "recruiters", "rectifier", "redeye", "redlead", "redrier", "reducer", "reduction", "redye", "reed",
  "reedpress", "reeds", "reel", "reeler", "referee", "reference", "referral", "refinedsyrup", "refiner", "refinery", "refining", "refinisher",
  "reflector", "reflow", "refractory", "refrigerator", "refueling", "regenerator", "regional", "register", "registered", "registrar",
  "registration", "regulated", "regulator", "regulatory", "rehairer", "reinforcer", "reinspector", "reinsurance", "reject", "relations",
  "relay", "relayrecord", "relayshop", "reliability", "reliefmap", "religious", "reliner", "relish", "remelter", "remnant", "remnants",
  "removal", "remover", "renovator", "rental", "repackroom", "repair", "repairer", "repairing", "repairorder", "repairs", "repeat",
  "repertoire", "replacer", "reporter", "reporting", "reports", "repossessor", "reproducer", "reproduction", "reptile", "repulping", "reroll",
  "resaw", "rescue", "research", "researcher", "reservation", "reservations", "reserve", "reserves", "residence", "resin", "resistance",
  "resonance", "resource", "resources", "respiratory", "rest", "restaurant", "restoration", "restorer", "retirement", "retort", "retortload",
  "retoucher", "retread", "returned", "returnedcase", "returneditem", "revenue", "reverser", "reviewer", "reviewing", "revising", "revival",
  "rewinder", "reworker", "ribbon", "ribbons", "ribs", "rice", "riddler", "ride", "rider", "rides", "ridingsilks", "rifle", "rifler", "rigger",
  "rigging", "rightofway", "rimturning", "ring", "rink", "ripeningroom", "ripper", "riprap", "ripsaw", "ritual", "river", "rivet", "riveter",
  "rivethole", "riveting", "road", "roadmixer", "roadroller", "roaster", "robotic", "rock", "rockdrill", "rockdust", "rocket", "rocketmotor",
  "rodandtube", "rodding", "roddinganode", "rodeo", "rodmill", "rodpuller", "roll", "rolled", "roller", "rollermill", "rollerprint",
  "rollerskate", "rolling", "rollingmill", "rolls", "rollsheeting", "rolltension", "rollthreader", "rolltube", "rollupguider", "roof",
  "roofer", "roofing", "room", "roomservice", "rooter", "rope", "ropemachine", "ropemaker", "ropewalk", "rosegrading", "rosinbarrel", "rotary",
  "rotarycutter", "rotarydrier", "rotaryengine", "rotarykiln", "rotaryrig", "rotaryshear", "rotor", "rouge", "rough", "rougher", "roughrice",
  "roughrounder", "rounder", "roundhouse", "roundupring", "roustabout", "route", "router", "routing", "roving", "rovingweight", "rubber",
  "rubbergoods", "rubberizing", "rubbermill", "rubbermold", "rubberroller", "rubberstamp", "rubberthread", "rubbertubing", "rugbacking",
  "rugcleaner", "rugcutter", "rugdryroom", "rugdyer", "rugframe", "ruginspector", "rugsample", "ruler", "rules", "runner", "running", "rural",
  "sack", "sacker", "saddle", "safeandvault", "safety", "safetylamp", "sagger", "sail", "saillayout", "sailor", "salad", "sale", "sales",
  "salesperson", "salesservice", "salt", "salvage", "salvager", "sample", "samplebook", "samplecolor", "sampler", "sampleroom", "samples",
  "sampletaker", "sand", "sandal", "sandblast", "sandblaster", "sandcutter", "sander", "sandfill", "sanding", "sandmill", "sandslinger",
  "sandstone", "sandwich", "sanitarian", "sanitary", "sanitation", "satellite", "saturator", "sauce", "sausage", "sausagemeat", "saveall",
  "sawedge", "sawing", "sawmill", "sawyer", "scagliola", "scale", "scaler", "scalerpacker", "scaling", "scallop", "scalper", "scan", "scanner",
  "scanning", "scarf", "scarfing", "scenic", "schedule", "scheduler", "school", "schoolplant", "schools", "science", "scientific", "scientist",
  "scoreboard", "scorer", "scourer", "scouring", "scout", "scrap", "scraper", "scrapper", "scratcher", "screen", "screener", "screenroom",
  "screentender", "screw", "screwdown", "screwer", "screweye", "screwhead", "screwmachine", "screwmaker", "script", "scroll", "scrubber",
  "scuba", "scullion", "sculptor", "scutcher", "seal", "sealer", "sealing", "seals", "seam", "seaman", "seamer", "seamlesstube", "searcher",
  "seasonal", "seasoning", "seat", "second", "secondary", "secondfloor", "seconds", "secretary", "section", "securities", "security", "seed",
  "seedcleaner", "seeder", "seedling", "seedpotato", "seedyeast", "seismic", "seismograph", "seismologist", "selection", "selector", "seller",
  "senior", "sensor", "separator", "septictank", "sequins", "sergeant", "server", "service", "servicer", "services", "serviceunit", "sessions",
  "setkey", "setstaff", "setter", "settings", "settlement", "settler", "setup", "sewer", "sewerline", "sewerpipe", "sewing", "sexton",
  "shackler", "shactor", "shade", "shadecloth", "shader", "shades", "shaft", "shake", "shaker", "shakerplate", "shale", "shank", "shankpiece",
  "shaper", "shaping", "sharpener", "shave", "shaver", "shear", "shearer", "sheargrinder", "shearing", "shed", "shedder", "sheep", "sheepskin",
  "sheet", "sheeter", "sheetmetal", "sheetmill", "sheetrock", "sheets", "shell", "shellacker", "sheller", "shellfish", "shellfishbed",
  "shellgrader", "shellmachine", "shells", "shellshop", "shellsieve", "shelving", "sheriff", "shield", "shift", "shiner", "shingle", "ship",
  "shipfitter", "shipfitters", "shipper", "shipping", "shipwright", "shipyard", "shirt", "shoe", "shoelayout", "shoemaker", "shoerepair",
  "shoerepairer", "shoes", "shooter", "shop", "shopfitter", "shopper", "shopping", "shore", "short", "shortage", "shorthand", "shot",
  "shotcoat", "shotgrinder", "shotpeening", "shoulder", "shoveler", "show", "shower", "showhorse", "shredder", "shrinker", "shrinkpit",
  "shrouder", "shucker", "shuttle", "shuttlecar", "shuttler", "side", "sider", "siding", "sieve", "sievegrader", "sifter", "sight",
  "sighteffects", "sightseeing", "sign", "signal", "signaler", "signs", "silhouette", "silicafilter", "silicaspray", "silk", "silkscreen",
  "silo", "silver", "silverer", "silvering", "silversmith", "silverware", "singe", "singer", "singing", "single", "singleneedle", "sink",
  "sinker", "sinter", "sintering", "siphon", "sites", "sitter", "size", "sizer", "skateshop", "skating", "skein", "skeiner", "skeins",
  "skeinwinding", "skeinyarn", "skelp", "sketch", "skewer", "skibinding", "skiff", "skimmer", "skin", "skinlap", "skinner", "skins", "skip",
  "skirt", "skitop", "skitow", "skiver", "skull", "skylights", "slab", "slabber", "slabdepiler", "slabs", "slaker", "slasher", "slat",
  "slatbasket", "slate", "slaughterer", "sleeping", "sleeve", "sleever", "slicer", "slicker", "slide", "slidemachine", "slider",
  "slidingjoint", "slimeplant", "slinger", "slip", "slipcover", "slipseat", "slitter", "slot", "slottag", "slotter", "slubber", "slugpress",
  "slugs", "slunkskin", "slurry", "small", "smallengine", "smash", "smoke", "smoked", "smoker", "smokeroom", "smoking", "smokingpipe",
  "smoother", "snack", "snag", "snailer", "sneller", "snow", "snowmaker", "snowremoving", "snuff", "snuffbox", "soaker", "soakers", "soaking",
  "soap", "soapdrier", "social", "society", "sociologist", "sock", "socket", "soda", "sodacolumn", "sodaroom", "sofa", "soft", "softball",
  "softener", "softsugar", "softtile", "software", "soil", "soils", "solder", "solderer", "soldering", "sole", "solicitation", "solicitor",
  "solid", "solution", "solutions", "solvent", "song", "sorter", "sorterpricer", "sorting", "sound", "soundeffects", "sounder", "sous",
  "souvenir", "soybean", "space", "spanner", "spark", "sparkplug", "sparmachine", "spear", "special", "specialist", "specialties", "specialty",
  "specimen", "speech", "speed", "speeder", "spice", "spider", "spikemachine", "spikemaking", "spindle", "spindler", "spinner", "spinning",
  "spinningbath", "spintable", "spiral", "spiraltube", "splashline", "splicer", "splicing", "split", "splitter", "splitting", "spoilage",
  "sponge", "spongepress", "spool", "spooler", "sport", "sporting", "sports", "spot", "spotter", "spout", "spray", "spraydrier", "sprayer",
  "spraygun", "spraying", "spraymachine", "sprayunit", "spreader", "spring", "springer", "springup", "sprinkling", "squad", "squeak",
  "squeegee", "squeezer", "stab", "stable", "stacker", "staff", "stage", "stager", "stain", "stained", "stainer", "staker", "stamp", "stamper",
  "stamping", "stampingmill", "stamppad", "stamps", "standard", "standards", "standin", "standpipe", "staple", "stapler", "starch", "starcher",
  "starchmaker", "starter", "starting", "state", "statehighway", "statement", "states", "static", "station", "stationary", "statistical",
  "statistician", "stave", "stavebolt", "stavemachine", "staveplaner", "stavesaw", "steak", "steam", "steamandgas", "steambox", "steamdrier",
  "steamer", "steamoven", "steampress", "steamtank", "steamtunnel", "steel", "steelbarrel", "steelboxtoe", "steeldie", "steelplate",
  "steelpost", "steelpourer", "steeltie", "steep", "steeper", "steeple", "steffen", "stem", "stemdryer", "stemhole", "stemmer", "stencil",
  "stenciler", "steno", "stenographer", "stenotype", "stereo", "stereotyper", "stereotyping", "sterilizer", "stevedore", "stevedoring",
  "steward", "stewardstewardess", "sticker", "stickeron", "sticks", "stiffener", "still", "stillpump", "stitchdowns", "stitcher", "stitching",
  "stock", "stockcontrol", "stocking", "stocklayer", "stockparts", "stockpatch", "stockyard", "stoker", "stone", "stonecutter", "stonedriller",
  "stonelathe", "stonemason", "stonemill", "stoner", "stonesetter", "stop", "stopboard", "stopper", "stoppermaker", "stopping", "storage",
  "store", "storekeeper", "stores", "story", "stove", "stovebottom", "straight", "straightener", "straightline", "strainer", "strap",
  "strapmachine", "straw", "strawhat", "street", "streetcar", "streetlight", "stress", "stretchbox", "stretcher", "strickler", "string",
  "stringer", "stringtop", "strip", "stripe", "striper", "stripper", "stripping", "striptank", "stroboscope", "strongnitric", "structural",
  "structures", "stubber", "stucco", "studder", "student", "students", "studio", "stuffer", "stull", "stunner", "stunt", "stylist",
  "subassembler", "subassembly", "subject", "sublimer", "submarine", "submergence", "submersible", "subscription", "substance", "substation",
  "substrate", "sugar", "suggestion", "suit", "sulfate", "sulfide", "sulfuricacid", "sulky", "sumatra", "summer", "sunglassclip", "sunglasses",
  "supercargo", "supervising", "supervisor", "supervisory", "supplies", "supply", "support", "surface", "surfaceplate", "surfacer", "surfaces",
  "surfboard", "surgeon", "surgical", "surveillance", "survey", "surveying", "surveyor", "survival", "suspect", "suture", "swage", "swager",
  "swatch", "sweatband", "swedger", "sweep", "sweeperbrush", "sweeppress", "sweetpotato", "swimming", "swimmingpool", "swisstype", "switch",
  "switchboard", "switchbox", "switches", "switchgear", "symbol", "synchronizer", "synthetic", "syrup", "syrupmixer", "system", "systems",
  "tabber", "tabcardpress", "table", "tablecover", "tablet", "tabletop", "tabmachine", "tack", "tacker", "tagger", "tagmachine", "tagpress",
  "tailer", "tailingsdam", "tailor", "tailstock", "take", "takedown", "taker", "takeroff", "takers", "takeup", "talking", "tallier", "tanbark",
  "tank", "tankage", "tankcar", "tanker", "tankfarm", "tankhouse", "tankroom", "tanksetter", "tanktruck", "tanner", "tanningdrum", "tape",
  "tapecontrol", "taper", "taperecorder", "taping", "tapper", "tapping", "taproom", "tare", "target", "targeteer", "tariff", "taster",
  "tattoo", "taxi", "taxicab", "taxidermist", "taximeter", "teacher", "teaching", "teamster", "tearer", "tearing", "technical", "technician",
  "techniques", "technologist", "technology", "telegraph", "telegrapher", "telegrout", "telephone", "television", "teller", "tellers",
  "tellertrader", "temperature", "temperer", "template", "temporary", "tender", "tenderizer", "tennisball", "tenoner", "tenterframe",
  "terminal", "termite", "terra", "terrapin", "terrazzo", "terrazzotile", "test", "testdesk", "testengine", "tester", "testing", "tests",
  "testskein", "tetrylscreen", "textile", "textiles", "texturer", "texturing", "thawshed", "theater", "theatre", "theoretical", "therapist",
  "therapy", "thermal", "thermit", "thermometer", "thermoscrew", "thermostat", "thermostatic", "thickener", "thinner", "third", "thirdrail",
  "thrasher", "thread", "threadcutter", "threader", "thresher", "threshing", "thrill", "thrower", "throwout", "ticket", "ticketer",
  "ticketing", "tier", "tieup", "tight", "tile", "tileconduit", "timber", "timberframer", "timbersizer", "time", "timekeeper", "timer",
  "timers", "timestudy", "timing", "tincontainer", "tinter", "tintermaker", "tinware", "tiplength", "tipout", "tipper", "tipple", "tire",
  "tirebladder", "tireservice", "title", "tntline", "tobacco", "tobaccocloth", "tobaccodrier", "togglepress", "toilet", "toiletries", "toll",
  "tone", "tongue", "tool", "toolanddie", "toolcrib", "tooldesigner", "tooler", "toolgrinder", "toolmachine", "toolmaker", "toolsetter",
  "tooth", "tophatbody", "topper", "topping", "topstitcher", "torch", "torque", "torsion", "touchup", "tourism", "towel", "towelcabinet",
  "tower", "towercrane", "towerloader", "town", "towtruck", "toxicologist", "toys", "tracer", "tracerpowder", "track", "tracklaying",
  "trackmobile", "tractor", "tractorcrane", "trade", "trader", "trades", "traffic", "trafficrate", "trailer", "trailers", "train", "trainer",
  "training", "trains", "transcriber", "transcribing", "transfer", "transfercar", "transferrer", "transformer", "translation", "translator",
  "transmission", "transmitter", "transplant", "transplanter", "transport", "transporter", "trapper", "travel", "traveler", "traverserod",
  "trawl", "trawler", "tray", "traydrier", "treasurer", "treater", "treating", "treatment", "tree", "treeshear", "treesurgeon", "treetrimmer",
  "treetrimming", "trim", "trimmachine", "trimmer", "trimming", "trimmings", "trimstencil", "trip", "tripe", "tripper", "trolley",
  "trolleywire", "trommel", "trophy", "trouble", "truck", "truckbody", "truckcrane", "truckdriver", "trucker", "truckload", "truer", "truing",
  "truss", "trust", "trustvault", "tryout", "tubber", "tube", "tubecleaning", "tubemachine", "tuber", "tubermachine", "tubing", "tubular",
  "tufter", "tufting", "tuftmachine", "tugboat", "tumble", "tumbler", "tumblers", "tumbling", "tumor", "tuner", "tuneup", "tungsten", "tunnel",
  "tunnelkiln", "turbine", "turbineblade", "turkeyroll", "turner", "turning", "turretlathe", "tutor", "twister", "twisting", "twitchell",
  "tyingmachine", "type", "typecasting", "typecopy", "typedisk", "typeproof", "typesetting", "typewriter", "typewriters", "typing", "typist",
  "ultrasonic", "ultrasound", "umbrella", "umpire", "undercoater", "undercover", "underwater", "underwriter", "underwriting", "uniforms",
  "unit", "united", "universal", "university", "unloader", "unloading", "unscrambler", "upfitter", "upholsterer", "upholstery", "upkeep",
  "upperleather", "uppers", "upsetter", "uptwister", "uranium", "urban", "urologist", "usage", "used", "usedcar", "user", "usher", "utilities",
  "utility", "utilitybill", "utilization", "vaccinator", "vacuum", "vacuumbottle", "vacuumdrier", "vacuumpan", "vacuumtank", "valet", "value",
  "valuer", "valve", "vamp", "vampstrap", "vandriver", "varietysaw", "varitype", "varnish", "varnisher", "varnishmaker", "vault", "vbelt",
  "vector", "vegetable", "vehicle", "vehicles", "vending", "vendor", "veneer", "veneerdrier", "veneering", "veneerlathe", "veneerstock",
  "ventilated", "ventilating", "ventilation", "ventilator", "vertical", "vessel", "veteran", "veterinarian", "veterinary", "vgroove",
  "vibrator", "vice", "videotape", "vine", "vinefruit", "vinegar", "violin", "virusserum", "visually", "vocational", "voice", "voicer",
  "voltage", "voucher", "vulcan", "vulcanizer", "vulcanizing", "waderboottop", "wafer", "waferline", "wafermachine", "wafers", "waist",
  "waistband", "waistline", "waiterwaitress", "walker", "wall", "wallboard", "wallcovering", "wallpaper", "warden", "wardrobe", "ware",
  "warehouse", "warmin", "warp", "warper", "warptension", "warpyarn", "wash", "washer", "washhouse", "washmill", "washoilpump", "washroom",
  "washtank", "waste", "wastemachine", "watch", "watchband", "watchcrystal", "watcher", "watchmaker", "water", "waterfilter", "watermeter",
  "waterquality", "waterservice", "watershed", "watertruck", "waterway", "waterworks", "wavesolder", "waxball", "waxer", "waxmachine",
  "waxpattern", "waxpot", "weapons", "wear", "wearing", "weather", "weaver", "weaveroom", "weaving", "webbing", "webmaster", "webpress",
  "wedding", "wedger", "weed", "weft", "weigher", "weighing", "weight", "weightank", "weighter", "weir", "weld", "welder", "welderfitter",
  "welding", "weldingrod", "welfare", "well", "welldrill", "welllogging", "wellpoint", "welt", "weltbutter", "wetcotton", "wetend",
  "wetmachine", "wetmix", "wetplant", "whacker", "wharf", "wheat", "wheel", "wheelchair", "wheeler", "wheelmill", "wheelpress", "wheels",
  "wheeltruing", "wheelwright", "whipped", "white", "whiteshoe", "whizzer", "wickandbase", "wicker", "width", "wigs", "wildlife", "winch",
  "wind", "winder", "winding", "windinglathe", "windingrack", "window", "windowshade", "wine", "winery", "winkcutter", "winterizer", "wiper",
  "wire", "wirebasket", "wireborder", "wirecoating", "wireframe", "wiremesh", "wirephoto", "wirer", "wirerope", "wiretransfer", "wireweaver",
  "wireworker", "women", "wood", "woodcrew", "woodenframe", "woodenshade", "woodenware", "woodfuel", "woodheel", "woodpole", "woods",
  "woodwind", "wool", "woolandpelt", "woolen", "woolfleece", "woolshearing", "word", "work", "worker", "workers", "working", "workroom",
  "workstudy", "workticket", "worm", "wormfarm", "wort", "wovenwood", "wrangler", "wrap", "wrapper", "wrapperhands", "wrapping", "wreath",
  "wrecker", "wrecking", "wringer", "wrinkle", "writer", "writing", "wrongaddress", "yard", "yardage", "yarding", "yarn", "yarns", "yeast",
  "yeastculture", "yieldloss", "young", "zigzag", "zincchloride", "zipper", "zookeeper", "zoologist"};  

static const char *adj[]={"adaptable", "adventurous", "affable", "affectionate", "agreeable", "alert", "alluring", "ambitious", "amiable",
  "amicable", "amused", "amusing", "assured", "bold", "boundless", "brave", "bright", "broad", "calm", "capable", "careful", "charming",
  "cheerful", "coherent", "comfortable", "communicative", "compassionate", "confident", "conscientious", "considerate", "convivial",
  "cooperative", "courageous", "courteous", "creative", "credible", "cultured", "dashing", "dazzling", "debonair", "decisive", "decorous",
  "delightful", "detailed", "determined", "diligent", "diplomatic", "disciplined", "discreet", "dynamic", "eager", "easygoing", "efficient",
  "elated", "eminent", "emotional", "enchanting", "encouraging", "endurable", "energetic", "entertaining", "enthusiastic", "excellent",
  "excited", "exclusive", "extroverted", "exuberant", "fabulous", "fair", "faithful", "fantastic", "fast", "fearless", "fine", "forceful",
  "frank", "friendly", "funny", "generous", "gentle", "glorious", "good", "gregarious", "happy", "hard", "harmonious", "helpful", "hilarious",
  "honest", "honorable", "humorous", "imaginative", "impartial", "independent", "industrious", "instinctive", "intellectual", "intelligent",
  "intuitive", "inventive", "jolly", "joyous", "kind", "knowledgeable", "level", "likeable", "lively", "lovely", "loving", "loyal", "lucky",
  "mature", "modern", "modest", "neat", "nice", "obedient", "optimistic", "painstaking", "passionate", "patient", "peaceful", "perfect",
  "persistent", "philoshopical", "pioneering", "placid", "plausible", "pleasant", "plucky", "polite", "powerful", "practical", "proactive",
  "productive", "protective", "proud", "punctual", "quick", "quiet", "rational", "receptive", "reflective", "reliable", "relieved", "reserved",
  "resolute", "resourceful", "responsible", "rhetorical", "righteous", "romantic", "sedate", "seemly", "selective", "self", "sensible",
  "sensitive", "shrewd", "silly", "sincere", "skillful", "smiling", "sociable", "splendid", "stimula", "strong", "successful", "succinct",
  "sympathetic", "talented", "thoughtful", "thrifty", "tidy", "tough", "trustworthy", "unassuming", "unbiased", "unusual", "upbeat",
  "versatile", "vigorous", "vivacious", "warm", "warmhearted", "who", "willing", "wise", "witty", "wonderful"};  

int main(int argc, char *argv[]){
  unsigned int rseed=0;
        if(argc>1){
    string arg=argv[1];
    if(arg=="-h" || arg=="/h" || arg=="-help" || arg=="/help" || arg=="--help"){
      cerr << "Human Readable Strong Password Generator. Entropy ~34bits. ktanff@gmail.com (GPL.v3)" << endl;
      cerr << endl;
      cerr << "Usage:" << endl;
      cerr << "  hrspassgen <random_seed> <repeat>" << endl;
      cerr << endl;
      cerr << "    random_seed : an integer number used as random number generator seed. Leave it blank (default) or zero to use the current time as the random seed." << endl;
      cerr << endl;
      cerr << "    repeat : repeat of password generating, default 10." << endl;
      cerr << endl;
      exit(0);
    }
    else
      rseed=atoi(argv[1]);
  }
        if(rseed)
    srand(rseed);
  else
                srand( (unsigned)time( NULL ) );

  int ncar = sizeof(car)/sizeof(const char *);
  int nadj = sizeof(adj)/sizeof(const char *);

        static char a[]="aeiouy";
        double fa[]={9,10,8,7,5,6};
        static char b[]="bcdfghjklmnprstvwxz";
        double fb[]={4,3,4,4,4,6,4,4,5,5,5,5,5,6,7,4,2,1,4};
        static char c[]="chghjhkhphpfqutzzhceshxhouss";
        double fc[]={5,2,2,2,2,1,3,1,3,1,5,2,2,1};
        double rp[2]={0.1,0.05};

        int i;
        double z,w;
        z=0;
        for(i=0;i<sizeof(fa)/sizeof(double);++i){
                z+=fa[i];
                fa[i]=z;
        }
        for(i=0;i<sizeof(fa)/sizeof(double);++i)
                fa[i]/=z;
        z=0;
        for(i=0;i<sizeof(fb)/sizeof(double);++i){
                z+=fb[i];
                fb[i]=z;
        }
        for(i=0;i<sizeof(fb)/sizeof(double);++i)
                fb[i]/=z;
        w=0;
        for(i=0;i<sizeof(fc)/sizeof(double);++i){
                w+=fc[i];
                fc[i]=w;
        }
        for(i=0;i<sizeof(fc)/sizeof(double);++i)
                fc[i]/=w;
        z*=3;
        w=z/(z+w);

  int n;
  if(argc<3)
                n=10;
        else
                n=atoi(argv[2]);

        char name[200];
  while(n-->0){
                int l=(rand()%7+rand()%7+rand()%7+rand()%7+rand()%7+rand()%7+rand()%7+rand()%7+rand()%7+rand()%7+rand()%7)/11+2;
                int s=(rand()%4>0);
                for(i=0;i<l;++i){
                        if(s){
                                if(rand()/double(RAND_MAX)<w){
                                        double r=rand()/double(RAND_MAX);
                                        int j=0;
                                        while(r>fb[j])
                                                ++j;
                                        name[i]=b[j];
                                }
                                else{
                                        double r=rand()/double(RAND_MAX);
                                        int j=0;
                                        while(r>fc[j])
                                                ++j;
                                        j*=2;
                                        name[i]=c[j]; ++i; ++j;
                                        name[i]=c[j];
                                }
                        }
                        else{
                                double r=rand()/double(RAND_MAX);
                                int j=0;
                                while(r>fa[j])
                                        ++j;
                                name[i]=a[j];
                        }
                        if(rand()/double(RAND_MAX)>rp[s])
                                s=1-s;
                }
                if(rand()%2) name[i-1]=toupper(name[i-1]);
                name[i]='1'+rand()%9;  i++;
                name[i]='0'+rand()%10; i++;
                name[i]='>'+rand()%3; i++;
    const char *s1=adj[rand()%nadj];
    while(*s1){ name[i]=*s1; i++; s1++; }
                if(rand()%2) name[i-1]=toupper(name[i-1]);
                name[i]='#'+rand()%4; i++;
    const char *s2=car[rand()%ncar];
    while(*s2){ name[i]=*s2; i++; s2++; }
                if(rand()%2) name[i-1]=toupper(name[i-1]);
                name[i]='\0';

                cout << name <<endl;
        }

        return 0;
}
